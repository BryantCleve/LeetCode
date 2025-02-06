class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counter;
        vector<vector<int>> freq(nums.size() + 1);
        vector<int> ret;

        for (int num : nums)
            counter[num]++;
        
        unordered_map<int, int>::iterator num_it = counter.begin();
        unordered_map<int, int>::iterator end = counter.end();
        for (; num_it != end; ++num_it)
            freq[num_it->second].push_back(num_it->first);
        
        for (int i = nums.size(); i > 0; --i) {
            for (int num : freq[i]) {
                ret.push_back(num);
                if (ret.size() == k)
                    return ret;
            }
        }
        return ret;
    }
};
