class Solution {
public:
    int titleToNumber(string columnTitle) {
        long long ret = 0;
        long long mul = 1;
        while (!columnTitle.empty())
        {
            ret += mul * (columnTitle.back() + 1 - 'A');
            
            mul *= 26;
            columnTitle.pop_back();
        }

        return ret;
    }
};