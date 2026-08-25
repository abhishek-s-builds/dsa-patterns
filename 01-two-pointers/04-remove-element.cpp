// LeetCode Q27 - Remove Element
// Approach: Two Pointers
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution { 
public: 
    int removeElement(vector<int>& nums, int val)  
    { 
        int i=0; 
        int j=nums.size()-1; 
        
        while(i<=j) 
        { 
            if(nums[i]==val) 
            { 
                swap(nums[i],nums[j]); 
                j--; 
            } 
            else 
            { 
                i++; 
            } 
        } 
        
        return i; 
    } 
};
