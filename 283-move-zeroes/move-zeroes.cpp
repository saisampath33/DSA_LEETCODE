class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int newp =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[newp++] = nums[i];
            }
        }
        while(newp<nums.size()){
            nums[newp++] = 0;
        }
    }
};