ques 1 : search in 2d matrix ii

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int j=matrix[0].size()-1;
        int i=0;
        while(i<matrix.size() && j>=0)
        {
            if(matrix[i][j]==target) return true;
            else if(matrix[i][j]>target) j--;
            else i++;
        }
        return false;
    }
};
TC:O(log N)
SC:O(1)
  
  Ques 2: Search a 2D matrix
// Question Link - https://leetcode.com/problems/search-a-2d-matrix/  
class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
            int m = matrix.size();
            int n = matrix[0].size();
            for(int i = 0;i<m;i++){
                for(int j = 0;j<n;j++){
                    if(target == matrix[i][j]){
                        return true;
                    }
                }
            }
            return false;
        }
    };

 TC - O(m * n)
 SC- O(1)

   Ques 3 :-
   leetcode potd:17/03/2025
link:https://leetcode.com/problems/divide-array-into-equal-pairs/?envType=daily-question&envId=2025-03-17
class Solution {
    public boolean divideArray(int[] nums) {
        Arrays.sort(nums);
        for(int i=0;i<nums.length;i+=2){
            if(nums[i]!=nums[i+1]){
                return false;
            }
        }
        return true;
    }
}
tc:O(nlogn)
sc:O(1)
