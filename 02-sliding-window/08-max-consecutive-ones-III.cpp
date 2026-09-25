/*
    LeetCode : 1004
    Problem  : Max Consecutive Ones III
    Approach : Sliding Window
    Time Complexity  : O(n)
    Space Complexity : O(1)
*/

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int count = 0;
        int maxlength = 0;
        int left = 0;

        for (int right = 0; right < nums.size(); right++) {

            if (nums[right] == 0) {
                count++;
            }

            while (count > k) {
                if (nums[left] == 0) {
                    count--;
                }
                left++;
            }

            int curr_length = right - left + 1;
            maxlength = max(maxlength, curr_length);
        }

        return maxlength;
    }
};
