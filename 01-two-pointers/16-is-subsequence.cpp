// Question No: 392 (Is Subsequence)
// Approach: Two Pointer Technique
// Time Complexity: O(T) - jahan T string 't' ki length hai. Hum string 't' par ek single pass karte hain.
// Space Complexity: O(1) - Hum koi extra space use nahi kar rahe hain, sirf do pointers (i aur j) use ho rahe hain.

class Solution { 
public: 
    bool isSubsequence(string s, string t) { 
        int i = 0; 
        int j = 0; 
        
        while(i < s.size() && j < t.size()) { 
            if(s[i] == t[j]) { 
                i++; 
            } 
            j++; 
        } 
        
        return i == s.size(); 
    } 
};
