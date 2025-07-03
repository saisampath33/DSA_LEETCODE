class Solution {
public:
    int uniquePathsHelper(int i, int j, int m, int n, vector<vector<int>>& dp) {
        // Boundary check
        if (i >= m || j >= n) return 0;

        // Base case: reached bottom-right
        if (i == m - 1 && j == n - 1) return 1;

        // Already computed
        if (dp[i][j] != -1) return dp[i][j];

        // Recursive + Memoization
        dp[i][j] = uniquePathsHelper(i, j+1, m, n, dp) + 
                   uniquePathsHelper(i+1, j, m, n, dp);
        return dp[i][j];
    }

    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return uniquePathsHelper(0, 0, m, n, dp);
    }
};
