// LeetCode 904
// Approach: Sliding Window 
//Time Complexity: O(N)
//Space Complexity: O(1)

class Solution {
public:
    int totalFruit(vector<int>& fruits) 
    {
        int total_fruit = 0;
        unordered_map<int, int> count;
        int left = 0;

        for(int right = 0; right < fruits.size(); right++)
        {
            int curr_fruit = fruits[right];
            count[curr_fruit]++;

            while(count.size() > 2)
            {
                int left_fruit = fruits[left];
                count[left_fruit]--;

                if(count[left_fruit] == 0)
                {
                    count.erase(left_fruit);
                }

                left++;
            }

            total_fruit = max(total_fruit, right - left + 1);
        }

        return total_fruit;
    }
};
