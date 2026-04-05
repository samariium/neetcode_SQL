class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int left = 0 , right = n - 1;

        int can_Store = 0;

        while(left < right){
            int width = right - left;
            int h = min(heights[left],heights[right]);

            int area = width * h;
            can_Store = max(area,can_Store);
            if(heights[left] > heights[right]){//we approach greedly because we need more space for store water  
                                               //if we minimize the width then we need more higher height for more space
                right--;
            }
            else{
                left++;
            }
        }
        return can_Store;
    }
};
