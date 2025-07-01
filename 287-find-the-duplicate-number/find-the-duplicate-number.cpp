class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> fr ;
        for(int num : nums){
            fr[num]++;
            if(fr[num]>1){
                return num;
            }
        }
        return -1;
    }
};