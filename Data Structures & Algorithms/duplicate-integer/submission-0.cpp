class Solution {

public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_set<int> dup(nums.begin(), nums.end());

        if (dup.size() < nums.size())
            return true;

        return false;
    }
};