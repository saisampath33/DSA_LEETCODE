class Solution {
public:
    int findMin(vector<int>& nums) {
        int minVal = *min_element(nums.begin(), nums.end());
        return minVal;
    }
};