// LeetCode Q125 - Valid Palindrome
// Approach: Two Pointers
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    bool isPalindrome(string s) 
    {

        int i=0;
        int j=s.length()-1;

        while(i<j)
        {
            while(i<j && !isalnum(s[i]))
            {
                i++;
            }
            while(i<j && !isalnum(s[j]))
            {
                j--;
            }
            if(tolower(s[i])!=tolower(s[j]))
            {
                return false;
            }

            i++;
            j--;

        }
        return true;
    }
};
