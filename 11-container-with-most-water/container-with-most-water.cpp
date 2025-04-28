class Solution {
public:
    int maxArea(vector<int>& height) {
       int n = height.size();
       int left =0;
       int right = n-1;
       int area=0;
       int maxarea=0;
       while(left<right){
        int height1 = min(height[left],height[right]);
        int width = right-left;
        area = height1*width;
        maxarea = max(area,maxarea);
        height[left]<height[right]?left++:right--;
       }
    return maxarea;
    }
};