Ques 1 : MEDIAN IN A ROW WISE SORTED MATRIX
class Solution {
  public:
    int median(vector<vector<int>> &mat) {
        int m= mat.size();
        int n= mat[0].size();
        
        
         int med=(m*n)/2; // jo ki (m*n)/2 index pe hpga
         int j=1;
         while(j<med) {
          sort(mat.begin(),mat.end());
            
            if(mat[0].size() !=0) mat[0].erase(mat[0].begin());
          else mat.erase(mat.begin());
            j++;
         }
        return mat[0][0];
        
       
       int k=0;
       vector<int> temp(m*n);
       for(int i=0; i<m; i++) {
           for(int j=0; j<n; j++) {
               temp[k++]= mat[i][j];
           }
       }
       sort(temp.begin(),temp.end());
       return temp[(m*n)/2];     
    TC O(M*N)
    SC O(M*N)
};

Ques 2 :-  Find a Peak Element II

class Solution {
public:
    int findColMax(vector<vector<int>>& mat, int col){
        int maxIndx = 0, maxi = INT_MIN;
        for (int i = 0;i < mat.size();i++){
            if (mat[i][col] > maxi){
                maxi = mat[i][col];
                maxIndx = i;
            }
        }
        return maxIndx;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int low = 0, high = mat[0].size() - 1, mid;
        while (high >= low){
            mid = low + (high - low) / 2;
            int maxIndx = findColMax(mat, mid);
            if ((mid == 0 || mat[maxIndx][mid] > mat[maxIndx][mid - 1]) && (mid == mat[0].size() - 1 || mat[maxIndx][mid] > mat[maxIndx][mid + 1])){
                return { maxIndx,mid };
            }
            else if (mid > 0 && mat[maxIndx][mid] < mat[maxIndx][mid - 1]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return { -1,-1 };
    }
};

TC O(rows*log(cols)) 
SC O(1)
