class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagrams;
        for (const auto& str : strs) {
            vector<int> counts(26, 0);
            for (char c : str) {
                counts[c - 'a']++;
            }
            string key = to_string(counts[0]);
            for (int i = 1; i < 26; ++i) {
                key += ',' + to_string(counts[i]);
            }
            anagrams[key].push_back(str);
        }

        vector<vector<string>> result;
        for (const auto& pair : anagrams)
            result.push_back(pair.second);
        return result;
    }
};
