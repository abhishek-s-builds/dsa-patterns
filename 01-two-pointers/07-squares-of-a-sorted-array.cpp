// LeetCode 977 - Squares of a Sorted Array
// Pattern: Two Pointers
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) 
    {
        int n = nums.size();

        vector<int> arr(n);

        int left = 0;
        int right = n - 1;
        int k = n - 1;

        while(left <= right)
        {
            if(abs(nums[right]) >= abs(nums[left]))
            {
                arr[k] = nums[right] * nums[right];
                right--;
            }
            else
            {
                arr[k] = nums[left] * nums[left];
                left++;
            }

            k--;
        }

        return arr;
    }
};
