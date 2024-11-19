#include <unordered_set>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> seen;
        for (int i : nums) {
            if (seen.find(i) != seen.end()) // If i is found
                return true;
            seen.insert(i);
        }
        return false;
    }
};
