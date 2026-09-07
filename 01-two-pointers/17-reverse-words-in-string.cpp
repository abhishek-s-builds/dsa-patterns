// LeetCode No: 151. Reverse Words in a String
// Approach: Two Pointer & In-place Simulation (String manipulation)
// Time Complexity (TC): O(N)
// Space Complexity (SC): O(N)

class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string st = "";
        int i = 0;
        
        while(i < n) {
            while(i < n && s[i] == ' ') {
                i++;
            }
            if(i < n && !st.empty()) {
                st += ' ';
            }
            while(i < n && s[i] != ' ') {
                st += s[i];
                i++;
            }
        }
        
        reverse(st.begin(), st.end());
        
        int start = 0;
        for(int end = 0; end <= st.length(); end++) {
            if(end == st.length() || st[end] == ' ') {
                reverse(st.begin() + start, st.begin() + end);
                start = end + 1;
            }
        }
        
        return st;
    }
};
