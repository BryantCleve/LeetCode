#include <unordered_map>

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
            return false;
        std::unordered_map<char, int> char_map;
        for (int i = 0; i < s.length(); i++) {
            char_map[s[i]] += 1;
            char_map[t[i]] -= 1;
        }
        // Make sure all values are 0, as in, each char in s had a corresponding char in t
        std::unordered_map<char, int>::iterator end = char_map.end();
        for (std::unordered_map<char, int>::iterator it = char_map.begin();
				it != end; ++it)
            if (it->second != 0)
                return false;
        return true;
    }
};
