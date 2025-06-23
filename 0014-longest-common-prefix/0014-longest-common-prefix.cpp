class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int minlen = strs[0].size();
        string ret = "";

        for (int i = 1; i < strs.size(); i++)
        {
            int len = strs[i].length();
            minlen = min(minlen, len);
        }

        for (int i = 0; i < minlen; i++)
        {
            char c = strs[0][i];
            bool isSame = true;
            for (int j = 0; j < strs.size(); j++)
            {
                if (c == strs[j][i]) continue;
                
                isSame = false;
            }

            if (isSame) ret += c;
            else break;
        }

        return ret;
    }
};