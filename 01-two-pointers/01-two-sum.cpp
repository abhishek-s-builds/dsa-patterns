// LeetCode 1 -- Two Sum
// Approach: Using unordered_map to store elements and find complement in O(1)
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if (mp.count(complement)) {
                return {mp[complement], i};
            }

            mp[nums[i]] = i;
        }

        return {-1, -1};
    }
};
