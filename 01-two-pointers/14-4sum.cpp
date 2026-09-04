// LeetCode Question No. 18 - 4Sumq
// Approach: Sorting + Two Pointers
// Time Complexity: O(N^3)
// Space Complexity: O(1)

// The array is first sorted. We fix the first two elements using nested loops,
// then use two pointers to find the remaining two elements whose sum completes
// the target. Duplicate elements are skipped to ensure unique quadruplets.
// long long is used to prevent integer overflow.

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) 
    {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int n=nums.size();
        if(n<4)
        {
            return ans;
        }
        long long targetLL=target;

        for(int i=0;i<n-3;i++)
        {
            if(i>0 && nums[i]==nums[i-1]) continue;

            for(int j=i+1;j<n-2;j++)
            {
                if(j>(i+1) && nums[j]==nums[j-1]) continue;

                long long minsum=1LL * nums[i]+nums[j]+nums[j+1]+nums[j+2];
                if(minsum>targetLL) break;

                long long maxsum=1LL * nums[i]+nums[j]+nums[n-1]+nums[n-2];
                if(maxsum<targetLL) continue;

                int k=j+1;
                int l=n-1;
                
                while(k<l)
                {
                    long long sum=1LL * nums[i]+nums[j]+nums[k]+nums[l];

                    if(sum==targetLL)
                    {
                        ans.push_back({nums[i],nums[j],nums[k],nums[l]});

                        while(k<l && nums[k]==nums[k+1]) k++;
                        while(k<l && nums[l]==nums[l-1]) l--;

                        k++;
                        l--;
                    }
                    else if(sum<target)
                    {
                        k++;
                    }
                    else
                    {
                        l--;
                    }
                }
            }
        }
        return ans;
    }
};
