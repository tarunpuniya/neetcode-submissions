class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        int maxsum = 0;
        int left = 0;

        vector<int>ans;

        for(int right=0; right<k; right++){
            maxsum = max(maxsum,nums[right]);
        }
      ans.push_back(maxsum);
        for(int right=k; right<n; right++){
            sum+=nums[right];
            sum-=nums[left];
            left++;

            maxsum = max(maxsum,nums[right]);
            ans.push_back(maxsum);
        }
        return ans;
        
    }
};
