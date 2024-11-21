class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> lookup;
        int difference, size = nums.size();
        vector<int> ret;
        for (int i = 0; i < size; i++) {
            difference = target - nums[i];
            if (lookup.count(difference)) {
                ret = {lookup[difference], i};
                return ret;
            }
            else
                lookup.insert({nums[i], i});
        }
        return ret;
    }
};
