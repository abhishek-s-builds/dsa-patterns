// LeetCode: 11 - Container With Most Water
// Approach: Two Pointers
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int left = 0;
        int right = height.size() - 1;

        int maxarea = 0;

        while (left < right) 
        {
            int currarea = (right - left) * min(height[left], height[right]);

            maxarea = max(currarea, maxarea);

            if (height[left] < height[right]) 
            {
                left++;
            }
            else 
            {
                right--;
            }
        }

        return maxarea;
    }
};
