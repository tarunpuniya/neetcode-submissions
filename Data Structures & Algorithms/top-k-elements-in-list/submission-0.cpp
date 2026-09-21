class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>freq;
        for(int i=0; i<n; i++){
            freq[nums[i]]++;
        }
        vector<pair<int,int>>v;
        for(auto it:freq){
            v.push_back({it.first,it.second});
        }
        sort(v.begin(),v.end() , [](auto &a , auto &b){
            return a.second>b.second;
        });

        vector<int>ans;
        for(int i=0; i<k; i++){
            ans.push_back(v[i].first);
        }
        return ans;
        
    }
};
