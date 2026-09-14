/*
LeetCode 567 - Permutation in String
Approach: Sliding Window + Frequency Map
Time Complexity:O(n)
Space Complexity:O(1)
Pattern: Sliding Window
*/

class Solution {
public:
    bool checkInclusion(string s1, string s2) 
    {
        if(s1.length() > s2.length())
        {
            return false;
        }

        int s1size = s1.length();

        map<char, int> s1mp;

        for(auto c : s1)
        {
            s1mp[c]++;
        }

        map<char, int> curr_window;

        int left = 0;

        for(int right = 0; right < s2.length(); right++)
        {
            char value = s2[right];

            curr_window[value]++;

            if(right >= s1size - 1)
            {
                if(s1mp == curr_window)
                {
                    return true;
                }

                curr_window[s2[left]]--;

                if(curr_window[s2[left]] == 0)
                {
                    curr_window.erase(s2[left]);
                }

                left++;
            }
        }

        return false;
    }
};
