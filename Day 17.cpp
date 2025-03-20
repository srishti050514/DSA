Ques 1 :- remove outermost parenthesis

class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int count = 0;
        for(int i = 0 ; i < s.length() ; i++) {
            if(s[i] == '(') {
                if(count != 0) {
                    ans.push_back(s[i]);
                }
                count++;
            } else {
                count--;
                if(count != 0) {
                    ans.push_back(s[i]);
                }
            }
        }
        return ans;
    }
};

TC:O(N)
SC:O(N)

Ques 2 :  Isomorphic String

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>st;
        unordered_map<char,char>st1;
        int i=0;

        if(s.length()!=t.length()){
           return false;
        }
        while(i<s.length()){
            if(st.contains(s[i])){
                if(st[s[i]]!=t[i]){
                    return false;
                }
            }
            else if(st1.contains(t[i])){
                   return false;
            }
            else {
                st[s[i]]=t[i];
                st1[t[i]]=s[i];
            }
            i++;
        }

        return true;
    }
};

TC:- O(N)
SC:-O(N)
