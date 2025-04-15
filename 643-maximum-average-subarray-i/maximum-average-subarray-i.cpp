class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left =0;
        int right =0;
        double avg=0;
        double maxi =  INT_MIN;
        int sum =0;
        while(right<nums.size()){
            sum = sum + nums[right];
            if((right - left +1) == k){
                avg = (double)sum / k;
                maxi = max(maxi,avg);
                sum = sum - nums[left];
                left++;
            }
            right++;
        }
        return maxi;
    }
};