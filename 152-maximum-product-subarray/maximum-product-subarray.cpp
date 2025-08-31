class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi =0;
        if(nums.size()==1){
            return nums[0];
        }
        for(int i=0;i<nums.size();i++){
             int product=1;
            for(int j =i;j<nums.size();j++){
                product *= nums[j];
                maxi = max(product,maxi);
            }
        }
        return maxi;
    }
};