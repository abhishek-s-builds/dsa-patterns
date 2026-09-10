/*
    LeetCode Question: 643 - Maximum Average Subarray I
    Approach: Sliding Window
    Time Complexity: O(n)
    Space Complexity: O(1)
*/

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) 
    {
        double curr_sum=accumulate(nums.begin(),nums.begin()+k,0);
        double max_sum=curr_sum;

        for(int right=k;right<nums.size();right++)
        {
            curr_sum+= nums[right] - nums[right-k];
            max_sum=max(curr_sum,max_sum);
        }

        return max_sum/k;
    }
};
