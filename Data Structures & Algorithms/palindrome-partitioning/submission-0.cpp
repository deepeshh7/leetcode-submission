class Solution {
public:
    vector<vector<string>> res;
    vector<vector<string>> partition(string s) {
        vector<string> cur;
        backtrack(s,0,cur);
        return res;
    }
private:
    void backtrack(string s, int start, vector<string>& cur)
    {
        if(start==s.size())
        {
            res.push_back(cur);
            return;
        }

        for(int i=start;i<s.size();i++)
        {
            if(isPalindrome(s,start,i))
            {
                cur.push_back(s.substr(start,i-start+1));
                backtrack(s,i+1,cur);
                cur.pop_back();
            }
        }
    }

    bool isPalindrome(string& s, int left, int right)
    {
        while(left<right)
        {
            if(s[left]!=s[right]) return false;
            left++;
            right--;
        }
        return true;
    }
};
