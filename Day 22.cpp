Ques 1 : Minimum Add to make Parenthesis Valid
//link-https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/

class Solution {
    public:
        int minAddToMakeValid(string s) {
            int open=0,close=0;
            for(auto c:s){
                if(c =='(')open++;
                else{
                    if(open>0)open--;
                    else close++;
                }
            }
            return open+close;
            
        }
    };

Ques 2 :-Sum of beauty of all substrings
//link-https://leetcode.com/problems/sum-of-beauty-of-all-substrings/
//Code-
class Solution {
    public:
        int beautySum(string s)
         {
            int sum=0;
            
            //choose length of substring
            for(int len=0;len<s.length();len++)
            { unordered_map<char,int>freq;
                for(int i=len;i<s.length();i++)
                {
                    
                    int maxi=0,mini=INT_MAX;
                        freq[s[i]]++;
                    
                    for(auto& [ch,count]:freq){
                    maxi=max(maxi,count);
                    mini=min(mini,count);}
                
                sum+=(maxi-mini);//Add beauty of the current substring
                }
            }
            return sum;
        }
    }; 
  
