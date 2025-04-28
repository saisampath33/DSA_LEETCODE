class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> mpp;
        // vector<string> arr;
        for(int i=0;i<strs.size();i++){
            string s =strs[i];
            sort(s.begin(),s.end());
            mpp[s].push_back(strs[i]);
        }
        vector<vector<string>> main;
        for(auto it: mpp){
            main.push_back(it.second);
        }
        return main;
    }
};