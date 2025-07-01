class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                pos.push_back(nums[i]);
            }
            else{
                neg.push_back(nums[i]);
            }
        }
        int p=0,n=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                res.push_back(pos[p++]);
            }else{
                res.push_back(neg[n++]);
            }
        }
        return res;
    }
};