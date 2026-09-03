// LeetCode Question No. 16 - 3Sum Closest
// Approach: Two Pointer
// 1. Sort the array.
// 2. Fix one element and use two pointers to find the remaining two elements.
// 3. Update the closest sum whenever a smaller difference from the target is found.
// Time Complexity: O(n^2)
// Space Complexity: O(1) (excluding the space used by sorting)

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) 
    {
        if(nums.size()<3)
        {
            return 0;
        }

        sort(nums.begin(), nums.end());

        int closest_sum = nums[0] + nums[1] + nums[2];

        for(int i = 0; i < nums.size() - 2; i++)
        {
            int j = i + 1;
            int k = nums.size() - 1;

            if(i > 0 && nums[i] == nums[i - 1]) continue;

            while(j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];

                if(abs(sum - target) < abs(closest_sum - target))
                {
                    closest_sum = sum;
                }

                if(sum == target)
                {
                    return target;
                }
                else if(sum > target)
                {
                    k--;
                }
                else
                {
                    j++;
                }
            }
        }

        return closest_sum;
    }
};
