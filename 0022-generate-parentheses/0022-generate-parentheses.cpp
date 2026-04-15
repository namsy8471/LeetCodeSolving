class Solution {
public:
    vector<string> v ;

    vector<string> generateParenthesis(int n) {

        Calc("", 0, 0, v, n);
        
        return v;
    }

    void Calc(string currentStr, int open, int close, vector<string>& v, int n)
    {
        if(close == n)
        {
            v.push_back(currentStr);
            return;
        }

        if(open < n)
        {
            auto newStr = currentStr + '(';
            Calc(newStr, open + 1, close, v, n);
        }

        if(close < open)
        {
            auto newStr = currentStr + ')';
            Calc(newStr, open, close + 1, v, n);
        }

    }
};