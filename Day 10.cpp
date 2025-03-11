Day 10
Ques 1  Rearrange Array Elements by Sign
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        int m=0,p=0;
        vector<int>pos;
        vector<int>neg;
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(nums[i]>=0) pos.push_back(nums[i]);
            else neg.push_back(nums[i]);
        }
        for(int j=0;j<n;j++){
            if(ans.size()%2==0){
                ans.push_back(pos[m]);
                m++;
            }
            else{
                ans.push_back(neg[p]);
                p++;
            }
        }
        return ans;
    }
};

T.C.: O(N) 
S.C.: O(N)


  Ques 2 Best time to buy and sell stock 
class Solution {
    public:
        void nextPermutation(vector<int>& nums) {
            int n=nums.size();
            int indx=-1;
            if(nums.empty()){ return;}
            for(int i=n-2;i>=0;i--){
                if(nums[i]<nums[i+1]){
                    indx=i;
                    break;}}
            if(indx==-1){
                reverse(nums.begin(),nums.end());
                return;}
            for(int i=n-1;i>indx;i--){
                if(nums[indx]<nums[i]){
                    swap(nums[indx],nums[i]);
                    break;}}
            reverse(nums.begin()+indx+1,nums.end());
        }
    };
 TC:O(N)
 SC:O(N)

Approach:Find the first decreasing element from the right and swap it with the next 
 larger element. Reverse the right part to get the next permutation.

