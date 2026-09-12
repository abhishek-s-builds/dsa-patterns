// Question no - 438
// Approach - Sliding Window
// TC - O(n * k) in worst case due to unordered_map comparison
// SC - O(k)

class Solution { 
public: 
    vector<int> findAnagrams(string s, string p)  
    { 
        int frequency = p.length(); 
        unordered_map<char,int> p_window; 
 
        for(auto c : p) 
        { 
            p_window[c]++; 
        } 
 
        vector<int> arr; 
        unordered_map<char,int> curr_window; 
 
        int left = 0; 
 
        for(int right = 0; right < s.length(); right++) 
        { 
            curr_window[s[right]]++; 
 
            if(right >= frequency - 1) 
            { 
                if(p_window == curr_window) 
                { 
                    arr.push_back(left); 
                } 
 
                curr_window[s[left]]--; 
 
                if(curr_window[s[left]] == 0) 
                { 
                    curr_window.erase(s[left]); 
                } 
 
                left++; 
            } 
        } 
 
        return arr; 
    } 
};
