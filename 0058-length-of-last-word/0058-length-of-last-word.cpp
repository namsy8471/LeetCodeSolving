class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(), s.end());

        int ret = 0;
        bool isStartToCnt = false;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
            {
                if (isStartToCnt) break;
                else continue;
            }

            isStartToCnt = true;
            ret++;
        }

        return ret;
    }
};