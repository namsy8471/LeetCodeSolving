class Solution {
public:
    bool isMatch(string s, string p) {
        int i = 0;
        int j = 0;

        return backTrack(i, j, s, p);
    }

    bool backTrack(int i, int j, const string& s, const string& p)
    {
        if(j == p.length())
            return i == s.length();
        
        bool currentMatch = (i < s.length() && (s[i] == p[j] || p[j] == '.'));

        if(j + 1 < p.length() && p[j + 1] == '*')
            return backTrack(i, j + 2, s, p) || (currentMatch && backTrack(i + 1, j, s, p));
        else
            return  currentMatch && backTrack(i + 1, j + 1, s, p);
    }
};