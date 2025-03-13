Ques 1 
Given a sorted array of distinct integers and a target value, return the index if the target is found

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int low=0;
       int high=nums.size();
       int ans=nums.size();
       while(low<high){
        int mid=(low+high)/2;
          if(nums[mid]>=target){
            ans =mid;
            high=mid;

        }else{
            low=mid+1;
        }
       }
       return ans;
        
    }
};
TC=O(LOGN)
SC=O(1)

  Ques 2 :
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=0,high =nums.size();
       vector<int> v={-1,-1};
         while(low<high){
             int mid=(low+high)/2;
             if(nums[0]==target){
            v[0]=0;
         }
             if(nums[mid]>=target){
                high=mid;
                if(nums[mid]==target)
               { v[0]=mid;}
             }else{
                low=mid+1;
             }
         }
         low=0,high =nums.size();
         while(low<high){
            int mid=(low+high)/2;
             if(nums[high-1]==target){
            v[1]=high-1;
         }
             if(nums[mid]<=target){
                low=mid+1;
                if(nums[mid]==target)
               { v[1]=mid;}
             }else{
                high=mid;
             }}
         return v;
    }
};
TC=O(LOGN)
SC=0(1)


Ques 3:Binary Search

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        while(s<=e){
            if (nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return -1;
    }
};
TC:O(logN)
SC:O(1)
