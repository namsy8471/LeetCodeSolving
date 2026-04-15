class Solution {
public:
    int romanToInt(string s) {
        const array<string, 13> arr = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
const array<int, 13> intArr = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    
        int ret = 0;
        int idx = 0;
        while(idx < s.length())
        {
            for(int j = 0; j < arr.size(); j++)
            {
                auto size = arr[j].length();
                auto cmp = s.substr(idx, size);

                if (arr[j] == cmp)
                {
                    idx += size;
                    ret += intArr[j];
                    break;
                }
            }
        }

        return ret;
    }
};