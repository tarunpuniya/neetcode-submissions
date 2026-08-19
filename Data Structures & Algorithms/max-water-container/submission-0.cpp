class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxwater = 0;
        int left = 0;
        int right = n-1;
        while(left<=right){
            int width = right-left;
            int heigh = min(height[left],height[right]);
            int current_water = heigh*width;
            maxwater = max(maxwater,current_water);
            if(height[left]<height[right]) left++;
            else right--;
        }
        return maxwater;
        
    }
};
