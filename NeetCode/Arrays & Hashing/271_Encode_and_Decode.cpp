class Solution {
public:

    string encode(vector<string>& strs) {
        string s = "";
        for (string str : strs)
            s += str + "\"";
        return s;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        string word;
        for (char c : s) {
            if (c != '\"')
                word += c;
            else {
                strs.push_back(word);
                word = "";
            }
        }
        return strs;
    }
};
