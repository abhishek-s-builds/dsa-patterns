// LeetCode: 209 - Minimum Size Subarray Sum
// Approach: Sliding Window
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution { 
public: 
    int minSubArrayLen(int target, vector<int>& nums) 
    { 
        int current_sum = 0; 
        int min_length = INT_MAX; 
        int left = 0; 
        
        for(int right = 0; right < nums.size(); right++) 
        { 
            current_sum += nums[right]; 
            
            while(current_sum >= target) 
            { 
                min_length = min(min_length, right - left + 1); 
                current_sum = current_sum - nums[left]; 
                left++; 
            } 
        } 
        
        if(min_length == INT_MAX) 
        { 
            return 0; 
        } 
        
        return min_length; 
    } 
};
