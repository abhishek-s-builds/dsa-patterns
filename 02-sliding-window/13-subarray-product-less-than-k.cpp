
// LeetCode Q-713: Subarray Product Less Than K
// Approach: Sliding Window
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k)
    {
        int left = 0;
        int count = 0;
        int product = 1;

        for (int right = 0; right < nums.size(); right++)
        {
            product *= nums[right];

            while (product >= k && left <= right)
            {
                product /= nums[left];
                left++;
            }

            count += (right - left + 1);
        }

        return count;
    }
};
```

