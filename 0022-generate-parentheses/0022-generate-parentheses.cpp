class Solution {
public:
    vector<string> v ;

    vector<string> generateParenthesis(int n) {

        string s(2 * n, ' ');
        Calc(s, 0, 0, 0, v, n);
        
        return v;
    }

    void Calc(string& currentStr, int idx, int open, int close, vector<string>& v, int n)
    {
        if(close == n)
        {
            v.push_back(currentStr);
            return;
        }

        if(open < n)
        {
            currentStr[idx] = '(';
            Calc(currentStr, idx + 1, open + 1, close, v, n);
        }

        if(close < open)
        {
            currentStr[idx] = ')';
            Calc(currentStr, idx + 1, open, close + 1, v, n);
        }

    }
};