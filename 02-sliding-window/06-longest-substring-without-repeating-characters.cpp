// LeetCode: 3
// Approach: Sliding Window
// Time Complexity: O(n)
// Space Complexity: O(n)
class Solution { 
public: 
    int lengthOfLongestSubstring(string s)  
    { 
        vector<int>freq(128,0); 
        int left = 0, right = 0; 
        int maxLen = 0; 
 
        while (right < s.length())  
        { 
            if (freq[s[right]] == 0)  
            { 
                freq[s[right]] = 1; 
                maxLen = max(maxLen, right - left + 1); 
                right++; 
            } 
            else  
            { 
                freq[s[left]] = 0; 
                left++; 
            } 
        } 
 
        return maxLen; 
    } 
};
