class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int majority = n/2;

        unordered_map<int,int>freq;

        for(int i=0; i<n; i++){
            freq[nums[i]]++;

            for(auto element:freq){
                if(element.second>majority){
                    return element.first;
                }
            }
        }
        return -1;
        
    }
};