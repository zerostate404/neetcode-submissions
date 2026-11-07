class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int, int> seen;
        for (int i = 0; i < (int)nums.size(); i++) {
            int complement = target - nums[i];
            auto it = seen.find(complement);
            if (it != seen.end()) {
                res.push_back(it->second);
                res.push_back(i);
            }
            seen[nums[i]] = i;
        }
        return res;
    }
};
