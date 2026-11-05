// Question No: 1358
// Pattern: Sliding Window
// Approach: Two Pointers + Frequency Array
// TC: O(N)
// SC: O(1)

class Solution {
public:
    int numberOfSubstrings(string s) 
    {
        int n=s.length();

        vector<int> arr(3,0);
        int left=0;
        int right=0;
        int count=0;

        for(int right=0;right<n;right++)
        {
            arr[s[right]-'a']++;
            while(arr[0]>0 && arr[1]>0 && arr[2]>0)
            {
                count+=n-right;
                arr[s[left]-'a']--;
                left++;
            }
        }
        return count;
    }
};
