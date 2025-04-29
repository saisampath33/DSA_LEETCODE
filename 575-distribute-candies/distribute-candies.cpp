#include<bits/stdc++.h>
class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        map<int,int> mpp;
        int cantake = candyType.size()/2;
        for(int i=0;i<candyType.size();i++){
            mpp[candyType[i]++];
        }
        int size = mpp.size();
        int final = min(size,cantake);
        return final;
    }
};