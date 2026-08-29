//LeetCode 167 — Two Sum II: Input Array Is Sorted
//Pattern:Two Pointers
//Time:O(n)
//Space:O(1)

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        int left = 0;
        int right = numbers.size() - 1;

        while(left < right)
        {
            int sum = numbers[left] + numbers[right];

            if(sum == target)
                return {left + 1, right + 1};

            if(sum > target)
                right--;
            else
                left++;
        }

        return {};
    }
};
