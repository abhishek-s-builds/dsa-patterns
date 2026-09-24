// Qno: 1456 - Maximum Number of Vowels in a Substring of Given Length
// Approach: Sliding Window
// 1. Count vowels in the first window of size k.
// 2. Slide the window one character at a time.
// 3. Remove the leftmost character from the current window.
// 4. Add the new rightmost character to the current window.
// 5. Keep track of the maximum number of vowels.
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:

    bool is_vowel(char c)
    {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    int maxVowels(string s, int k) 
    {
        int vcount = 0;

        // First window
        for(int i = 0; i < k; i++)
        {
            if(is_vowel(s[i]))
            {
                vcount++;
            }
        }

        int maxcount = vcount;
        int left = 0;

        for(int right = k; right < s.length(); right++)
        {
            
            if(is_vowel(s[left]))
            {
                vcount--;
            }
            left++;

            if(is_vowel(s[right]))
            {
                vcount++;
            }

            maxcount = max(maxcount, vcount);
        }

        return maxcount;
    }
};
