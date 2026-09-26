// LeetCode : 424
// Approach : Sliding Window
// Time Complexity : O(n)
// Space Complexity : O(1)

class Solution {
public:
    int characterReplacement(string s, int k) 
    {
        vector<int> freq(26,0);
        int left=0;
        int maxlength=0;
        int max_freq=0;

        for(int right=0;right<s.length();right++)
        {
            freq[s[right]-'A']++;
            max_freq=max(max_freq,freq[s[right]-'A']);

            while((right-left+1)-max_freq>k)
            {
                freq[s[left]-'A']--;
                left++;
            }

            maxlength=max(maxlength,right-left+1);
        }

        return maxlength;
    }
};
