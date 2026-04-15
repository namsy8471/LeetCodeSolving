class Solution {
public:
    vector<string> v ;

    vector<string> generateParenthesis(int n) {

        string s = "";
        Calc(s, 0, 0, v, n);
        
        return v;
    }

    void Calc(string& currentStr, int open, int close, vector<string>& v, int n)
    {
        if(close == n)
        {
            v.push_back(currentStr);
            return;
        }

        if(open < n)
        {
            currentStr += '(';
            Calc(currentStr, open + 1, close, v, n);
            currentStr.pop_back();
        }

        if(close < open)
        {
            currentStr += ')';
            Calc(currentStr, open, close + 1, v, n);
            currentStr.pop_back();
        }

    }
};