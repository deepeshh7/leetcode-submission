class Solution {
public:
    vector<string> res;
    vector<string> generateParenthesis(int n) {
        string cur;
        backtrack(n,0,0,cur);
        return res;
    }
private:
    void backtrack(int n, int i, int j, string& cur)
    {
        if(cur.size()==2*n)
        {
            res.push_back(cur);
            return;
        }

        if(i<n)
        {
            cur.push_back('(');
            backtrack(n,i+1,j,cur);
            cur.pop_back();
        }

        if(j<i)
        {
            cur.push_back(')');
            backtrack(n,i,j+1,cur);
            cur.pop_back();
        }
    }
};
