// LeetCode 26: Remove Duplicates from Sorted Array
// Approach: Two Pointers
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int i = 0;
        int j = 0;

        while(j < nums.size())
        {
            if(nums[i] != nums[j])
            {
                i++;
                nums[i] = nums[j];
            }
            else
            {
                j++;
            }
        }

        return i + 1;
    }
};
