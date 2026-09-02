class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int r=board.size();
        int c=board[0].size();

        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                if(backtrack(board,word,i,j,0)) 
                    return true;
        return false;
    }
private:
    bool backtrack(vector<vector<char>>& board, string word,int i, int j, int k)
    {
        if(k==word.size())
        {
            return true;
        }
        if(i<0||j<0||i>=board.size()||j>=board[0].size()|| board[i][j]!=word[i]||board[i][j]='#')
            return false;
        
        board[i][j]='#';

        bool res = backtrack(board,word,i+1,j,k+1) ||
                   backtrack(board,word,i-1,j,k+1) ||
                   backtrack(board,word,i,j+1,k+1) ||
                   backtrack(board,word,i,j-1,k+1) ;
        board[i][j]=word[i];
        return res;
    }
};
