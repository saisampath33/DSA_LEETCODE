class Solution {
public:
    void lcs(vector<int> &nums, vector<int> &st, int index, vector<vector<int>> &vec) {
        if (index == nums.size()) {
            vec.push_back(st);
            return;
        }
        //pick
        st.push_back(nums[index]);
        lcs(nums, st, index + 1, vec);

       //nonpick
        st.pop_back();
        lcs(nums, st, index + 1, vec);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> sub;
        vector<int> temp;
        lcs(nums, temp, 0, sub);
        return sub;
    }
};
