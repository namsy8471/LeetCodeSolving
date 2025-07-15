class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ret = "";

        while (columnNumber > 0) {
            int modula = (columnNumber - 1) % 26;

            ret += 'A' + modula;

            columnNumber = (columnNumber - 1) / 26;
        }

        reverse(ret.begin(), ret.end());

        return ret;
    }
};