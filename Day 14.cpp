Ques 1 Find smallest divisor given a threshold
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int max=0,ans;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>max)
            max=nums[i];
        }
        int low=1,high=max,mid;
        while(low<=high)
        {
            int count=0;
            mid=low+(high-low)/2;
            for(int i=0;i<nums.size();i++)
            {
                count+=nums[i]/mid+((nums[i]%mid)!=0);
            }
            if(count<=threshold)
            {
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};
TC: O(nlogm)  
SC: O(1)

  Ques 2 Koko eating bananas
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int n=piles.size();
        int low=1,high=piles[n-1],mid,ans;
        while(low<=high)
        {
            long long count=0;
            mid=low+(high-low)/2;
            for (int i = 0; i < n; i++) {
            count+=(piles[i]+mid-1)/mid; 
            }
            if(count<=h)
            {
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};

TC: O(nlogm)  
SC: O(1)

  Ques 3: 
class Solution {
  public:
    int floorSqrt(int n) {
        // Your code goes here
        if(n==0||n==1)return n;
        int low=0,high=n;
        int ans;
        while(low<=high){
            int mid=(low+high)/2;
            int sq=mid*mid;
            if(sq<=n){
              ans=mid  ;
            }
        if(sq>n){
            high=mid-1;
            
        }else{
            low=mid+1;
            ans=mid;
             
        }
        }return ans;
    }
};
