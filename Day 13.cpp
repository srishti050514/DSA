Ques 1  Find Minimum in Rotated Sorted Array

class Solution {
    public:
        int findMin(vector<int>& nums) {
            int n=nums.size();
            int low=0;
            int high=n-1;
            int mini=INT_MAX;
            while(low<=high){
                if(nums[low]<=nums[high]){
                    mini=min(mini,nums[low]);
                    break;
                }
    
                int mid=(low+high)/2;
    
                if(nums[mid]==nums[low] && nums[mid]==nums[high]){
                    mini=min(mini,nums[mid]);
                    low++;
                    high--;
                    continue;
                }
    
                if(nums[mid]>=nums[low]){
                    //left sorted
                    mini=min(nums[low],mini);
                    low=mid+1;
                }
                else{
                    //right sorted
                    mini=min(nums[mid],mini);
                    high=mid-1;
    
                }
    
            }
            return mini;
            
        }
    };

Ques 2:- 
  class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n = arr.size();
        int low = 0,high = n-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if( arr[mid] == target)return mid;
        if(arr[low]<=arr[mid]){
            if(arr[low]<=target && arr[mid]>=target){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        else{ 
                if(arr[mid]<=target && arr[high]>=target){
                    low = mid+1;
                }
                else{
                    high = mid-1;
                }
        }
    }
    return -1;
    }
};

Ques 3:
Approach : using binary search, searched for the upper and lower bounds of x and stored them in pair...if any of them is not found then returned -1 in place of that
TC : O(logn)
SC : O(1)

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.
	pair<int, int> v = {-1,-1};
	int lo = 0;
	int hi = n-1;
	while(lo<=hi){
		int mid = lo + (hi-lo)/2;
		if(a[mid]==x){
			return {x,x};
		}
		else if (a[mid]<x){
			v.first = a[mid];
			 lo = mid+1;
		}
		else{
			v.second = a[mid];
			 hi = mid-1;
		}
	}

	return v;
}
