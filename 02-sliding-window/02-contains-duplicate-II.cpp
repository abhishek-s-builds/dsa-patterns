/*
LeetCode Q-219: Contains Duplicate II

Approach: Sliding Window + Unordered Set

We maintain a sliding window of size at most k.
The unordered_set stores elements currently present in the window.

If nums[right] is already present in the set,
then a duplicate exists within distance k, so return true.

Before moving forward, if the window size becomes greater than k,
remove the element that is k positions behind.

Time Complexity : O(n)
Space Complexity: O(k)
*/
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    { 
        unordered_set<int> st; 
 
        for(int right = 0; right < nums.size(); right++) 
        { 
            if(st.count(nums[right])) 
            { 
                return true; 
            } 
 
            st.insert(nums[right]); 
 
            if(st.size() >= k + 1) 
            { 
                st.erase(nums[right - k]); 
            } 
        } 
 
        return false; 
    } 
};
