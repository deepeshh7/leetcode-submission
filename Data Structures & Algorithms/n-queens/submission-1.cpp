class Solution {
public:
    vector<vector<string>> res;
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n,string(n,'.'));
        backtrack(n, 0 ,board);
        return res;
    }
private:
    void backtrack(int n, int r, vector<string> board)
    {
        if(r==n)
        {
            res.push_back(board);
            return;
        }

        for(int c=0;c<n;c++)
        {
            if(isSafe(board,r,c,n))
            {
                board[r][c]='Q';
                backtrack(n,r+1,board);
                board[r][c]='.';
            }
        }
    }
    
    bool isSafe(vector<string> board,int r, int c, int n)
    {
        for(int i=0;i<r;i++)
        {
            if(board[i][c]=='Q')
                return false;
        }

        for(int i=r-1,j=c-1; i>=0&&j>=0; i--,j--)
        {
            if(board[i][j]=='Q')
                return false;
        }

        for(int i=r-1,j=c+1; i>=0&&j>=0; i--,j++)
        {
            if(board[i][j]=='Q')
                return false;
        }

        
        return true;
    }
};
