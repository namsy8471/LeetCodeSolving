class Solution {
    array<array<int, 21>, 21> memo;
public:
    bool isMatch(string s, string p) {
        int i = 0;
        int j = 0;
        
        for(auto& row : memo)
            row.fill(-1);

        return backTrack(i, j, s, p);
    }

    bool backTrack(int i, int j, const string& s, const string& p)
    {
        if(j == p.length())
            return i == s.length();
        
        if(memo[i][j] != -1) return memo[i][j];

        bool currentMatch = (i < s.length() && (s[i] == p[j] || p[j] == '.'));
        bool ans;

        if(j + 1 < p.length() && p[j + 1] == '*')
            ans = backTrack(i, j + 2, s, p) || (currentMatch && backTrack(i + 1, j, s, p));
        else
            ans =  currentMatch && backTrack(i + 1, j + 1, s, p);

        memo[i][j] = ans;
        return memo[i][j];
    }
};