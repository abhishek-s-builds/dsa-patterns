/*
    LeetCode Q344 - Reverse String

    Approach:
    - Two Pointer Approach
    - Use left pointer at the beginning
    - Use right pointer at the end
    - Swap characters and move both pointers towards the center

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        int left = 0;
        int right = s.length() - 1;

        while(left < right)
        {
          swap(s[left], s[right]);
          left++;
          right--;
        }
    }
};
