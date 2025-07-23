class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;

        vector<string> v(numRows, "");
        bool isDown = false;
        int colIdx = 0;

        for (int i = 0; i < s.length(); i++)
        {
            v[colIdx] += s[i];
            
            if (colIdx == 0 || colIdx == numRows - 1)
                isDown = !isDown;
            
            colIdx += isDown ? 1 : -1;
        }

        string ret = "";

        for (const auto& s : v)
            ret += s;

        return ret;
    }
};