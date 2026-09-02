class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int> cur;
        backtrack(nums, target, cur, 0);
        return res;
    }
private:
    void backtrack(vector<int>& nums, int target,vector<int>& cur, int i)
    {
        if(target==0)
        {
            res.push_back(cur);
            return;
        }
        if(target<0 || i>=nums.size()) return;

        cur.push_back(nums[i]);
        backtrack(nums, target-nums[i],cur, i+1);
        cur.pop_back();
        while (i + 1 < nums.size() && nums[i] == nums[i + 1]) 
        { 
            i++;
        }
        backtrack(nums, target, cur, i+1);
    }
};
