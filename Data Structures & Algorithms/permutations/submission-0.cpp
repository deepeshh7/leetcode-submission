class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> permute(vector<int>& nums) {
       vector<bool> used(nums.size(),false);
       vector<int> perm;
       backtrack(perm, nums, used);
       return res;
    }
private:
    void backtrack(vector<int>& perm, vector<int>& nums, vector<bool>& used)
    {
        if(perm.size()==nums.size())
        {
            res.push_back(perm);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(!used[i])
            {
                perm.push_back(nums[i]);
                used[i]=true;
                backtrack(perm,nums,used);
                perm.pop_back();
                used[i]=false;
            }
        }
    }
};
