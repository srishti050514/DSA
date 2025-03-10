QUES 1: Two Sum

Code:
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> ans;
        int i,j;
        for(i=0;i<nums.size();i++){
            for(j=0;j<nums.size();j++){
                if(nums[i]+nums[j]==target && i<j){
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
            }
        }
        return ans;
    }
};
T.C.: O(N^2)
S.C.: O(1)


QUES 2: Sort Colors

class Solution {
public:
    void sortColors(vector<int>& nums) {
        sort(nums.begin(),nums.end());
    }
};

T.C.: O(N)
S.C.: O(1)

QUES 3 Maximum Score from Subarray Minimums
 class Solution {
  public:
    int pairWithMaxSum(vector<int> &arr) {
       int  n=arr.size();
          int msum=-1;
    for (int i=0;i<n-1;i++){
        int mini=min(arr[i],arr[i+1]);//smallest 
        int mini2=max(arr[i],arr[i+1]);//second smallest
        msum=max(msum,mini+mini2);
        for(int j=i+2;j<n && arr[j]<mini2;j++){
            if(arr[j]<mini){
                mini2=mini;
                mini=arr[j];
            }
            int sum=mini+mini2;
            msum=max(msum,sum);   }
    }
    return msum;
    }
};

