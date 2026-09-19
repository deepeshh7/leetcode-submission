class Solution {
public:
    vector<int> memo;

    int climbStairs(int n) {
        memo.assign(n + 1, -1);
        return dfs(n, 0);
    }

    int dfs(int n, int i) {
        if (i >= n)
            return i == n;

        if (memo[i] != -1)
            return memo[i];

        return memo[i] = dfs(n, i + 1) + dfs(n, i + 2);
    }
};