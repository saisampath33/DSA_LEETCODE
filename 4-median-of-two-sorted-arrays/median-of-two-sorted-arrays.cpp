class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        for(int i=0;i<nums1.size();i++){
            arr.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            arr.push_back(nums2[i]);
        }
        sort(arr.begin(),arr.end());
        int size = arr.size();
        double final;
        if(size%2 != 0){
            final = arr[size/2];
        }else{
            final = (arr[size/2] + arr[size/2 - 1])/2.0;
        }
        return final;
    }
};