class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n; //for k>n like 8 9 10 for first test case
        reverse(nums.begin(),nums.end()); //reverse whole array
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        
    }
};