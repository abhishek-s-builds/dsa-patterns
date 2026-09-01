// LeetCode 680 - Valid Palindrome II
// Approach: Two Pointers
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution { 
public: 
    bool check_valid(string s, int i, int j) 
    { 
        while(i < j) 
        { 
            if(s[i] == s[j]) 
            { 
                i++; 
                j--; 
            } 
            else 
            { 
                return false; 
            } 
        } 
        return true; 
    } 

    bool validPalindrome(string s)  
    { 
        int i = 0; 
        int j = s.length() - 1; 
 
        while(i < j) 
        { 
            if(s[i] == s[j]) 
            { 
                i++; 
                j--; 
            } 
            else 
            { 
                return check_valid(s, i + 1, j) || 
                       check_valid(s, i, j - 1); 
            } 
        } 
        return true; 
    } 
};
