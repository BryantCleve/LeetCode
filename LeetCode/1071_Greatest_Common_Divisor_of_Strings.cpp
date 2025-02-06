class Solution {
public:
    int intGcd(int num1, int num2) {
        if (num2 == 0) {
            return num1;
        }
        return intGcd(num2, num1 % num2);
    }
    string gcdOfStrings(string str1, string str2) {
        int gcdInt = intGcd(str1.size(), str2.size());
        string prefix = str1.substr(0, gcdInt);
        int size1 = str1.size() / gcdInt;
        int size2 = str2.size() / gcdInt;
        string s1 = "";
        string s2 = "";
        int i;
        for (i = 0; i < size1; i++) s1 += prefix;
        for (i = 0; i < size2; i++) s2 += prefix;
        string gcd = "";
        if (str1.find(s1) != string::npos &&
            str2.find(s2) != string::npos)
            gcd = prefix;
        return gcd;

        /* Best solution I found
        if(str1+str2!=str2+str1)
        {
            return "";
        }
        int gcdlen=gcd(str1.size(),str2.size());
        return str1.substr(0,gcdlen);
        */
    }
};