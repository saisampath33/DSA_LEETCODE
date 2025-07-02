class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // map<int, int> mpp;

        // // Count frequency of each number
        // for (int i = 0; i < nums.size(); i++) {
        //     mpp[nums[i]]++;
        // }

        // // Find the number that appears only once
        // for (auto it : mpp) {
        //     if (it.second == 1) {
        //         return it.first;
        //     }
        // }

        // return -1; 
        int res =0;
        for(int i=0;i<nums.size();i++){
            res ^= nums[i];
        }
        return res;
    }
};
