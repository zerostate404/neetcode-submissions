class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for (auto x : nums) {
            auto [it, inserted] = seen.insert(x);
            if (!inserted) return true;
        }
        return false;
    }
};