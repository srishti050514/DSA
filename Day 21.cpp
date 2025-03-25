Ques 1 :- Longest Palindromic Substring


class Solution {
public:
    int checkCount(string s, int i, int j){
        while (i >= 0 && j < s.length() && s[i] == s[j]){
            i--;
            j++;
        }
        return j - i - 1;
    }
    string longestPalindrome(string  s) {
        int maxCount = 1, firstIndx = 0;
        for (int i = 0;i < s.length();i++){
            int len1 = checkCount(s, i, i);
            int len2 = checkCount(s, i, i + 1);
            int len = max(len1, len2);
            if (len > maxCount){
                maxCount = len;
                firstIndx = i - (len - 1) / 2;
            }
        }
        return s.substr(firstIndx, maxCount);
    }
};

 TC : O(n square) 
 SC : O(1)

   Ques 2 :- Substrings with K Distinct

class Solution {
public:
    int countAtMostK(string s, int k){
        int count = 0, left = 0, uniqueCount = 0;
        int freq[26] = { 0 };
        for (int right = 0;right < s.length();right++){
            if (freq[s[right] - 'a'] == 0){ uniqueCount++; }
            freq[s[right] - 'a']++;

            while (uniqueCount > k){
                freq[s[left] - 'a']--;
                if (freq[s[left] - 'a'] == 0){
                    uniqueCount--;
                }
                left++;
            }

            count += right - left + 1;

        }

        return count;
    }
    int countSubstr(string& s, int k) {
        return countAtMostK(s, k) - countAtMostK(s, k - 1);
    }
};


 TC O(n) 
SC O(1) 
