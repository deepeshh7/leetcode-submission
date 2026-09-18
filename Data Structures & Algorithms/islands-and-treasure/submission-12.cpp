class Solution {
public:
    vector<vector<int>> directions = {{1,0},{-1,0},{0,1},{0,-1}};
    int ROWS, COLS;

    void islandsAndTreasure(vector<vector<int>>& grid) {
        ROWS = grid.size();
        COLS = grid[0].size();

        for (int r = 0; r < ROWS; r++)
            for (int c = 0; c < COLS; c++)
                if (grid[r][c] == 0)
                    dfs(grid, r, c, 0)
    }

private:
    void dfs(vector<vector<int>>& grid, int r, int c, int dist) {
        // Out of bounds, wall, or not an improvement -> stop
        if (r < 0 || c < 0 || r >= ROWS || c >= COLS) return;
        if (grid[r][c] == -1) return;
        if (dist > grid[r][c]) return; // already have an equal or better distance here

        grid[r][c] = dist; // relax: record the better distance

        for (auto& dir : directions) {
            dfs(grid, r + dir[0], c + dir[1], dist + 1);
        }
    }
};