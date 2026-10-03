class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        int left = 0;
        int right = n-1;
        while(left<right){
            swap(nums[left],nums[right]);
            left++;
            right--;
        }

        int l = 0;
        int r = k-1;
        while(l<r){
            swap(nums[l],nums[r]);
            l++;
            r--;
        }

        int lef = k;
        int rig = n-1;
        while(lef<rig){
            swap(nums[lef],nums[rig]);
            lef++;
            rig--;
        }
        
    }
};