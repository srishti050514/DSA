Ques 1 Pascal triangle 
class Solution {
public:
    vector<vector<int>> generate(int numrows) {
        vector<vector<int>> ans;
        vector<int>previous;
        for(int i=1;i<=numrows;i++){
            vector<int>current(i,1);
            for(int j=1;j<i-1;j++ ){
                current[j]=previous[j-1]+previous[j];
            }
            previous=current;
            ans.push_back(current);
        }
        return ans;
    }
};
Approach:observed that for any nth row we need a vector of size n then put elements in the vector according to pascals triangle condition and got the desired 
triangle
TC:O(N*N)
SC:O(N*N)

Ques 2 Sprial Matrix
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> vecna;
        if(matrix.empty() || matrix[0].empty()){return vecna;}
        int i, j;
        int top = 0;
        int left = 0;
        int bottom = matrix.size()-1;
        int right = matrix[0].size()-1;

        while(top <= bottom && left <= right){
            for(i = left; i <= right; i++){
                vecna.push_back(matrix[top][i]);
            }
            top++;

            for(i = top; i <= bottom; i++){
                vecna.push_back(matrix[i][right]);
            }
            right--;

            if(top <= bottom){
                for(i = right; i >= left; i--){
                    vecna.push_back(matrix[bottom][i]);
                }
                bottom--;
            }

            if(left <= right){
                for(i = bottom; i >= top; i--){
                    vecna.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return vecna;
    }
};

 TC = O(M X N)
 SC = O(M X N)

   Ques 3 Rotate an image by 90
   class Solution {
    public:
        void rotate(vector<vector<int>>& matrix) {
            int n=matrix.size();
            vector<vector<int>> ans(n,vector<int>(n));
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    ans[j][i]=matrix[i][j];}}
        for(int i=0;i<n;i++){
        reverse(ans[i].begin(),ans[i].end());}
        matrix=ans;}
    };
    
 TC:O(N^2)
 SC:O(N^2)

Approach:Rotating an matrix is simple first make an ans vector of same size as matrix ,then
  1st step is to transpose the matrix and store in ans then reverse the rows only in ans vector.

