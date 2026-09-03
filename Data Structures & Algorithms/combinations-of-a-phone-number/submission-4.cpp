class Solution {
public:
    vector<string> res;
    vector<string> digitToChar = {"", "", "abc", "def", "ghi","jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return res;
        string cur;
        backtrack(digits, 0, cur);
        return res;
    }

    void backtrack(string digits, int i, string cur)
    {
        if(i==digits.size())
        {
            res.push_back(cur);
            return;
        }

        string chars = digitToChar[digits[i] - '0'];

        for (int j = 0; j < chars.size(); j++) {
            cur.push_back(chars[j]);
            backtrack(digits,i+1,cur);
            cur.pop_back();
        }
    }
};
