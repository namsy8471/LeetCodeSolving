class Solution {
public:
    string intToRoman(int num) {
        
        string ret = "";
        vector<int> v ={1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

        int idx = 0;

        while(num > 0)
        {
            auto curNum = v[idx];
            if(num >= curNum)
            {
                ret += CalcChar(curNum);
                num -= curNum;
                continue;
            }
            else
            {
                idx++;
            }
        }

        return ret;
    }

    string CalcChar(int i)
    {
        if(i == 1000)
            return "M";
        else if (i == 900)
            return "CM";
        else if (i == 500)
            return "D";
        else if (i == 400)
            return "CD";
        else if (i == 100)
            return "C";
        else if (i == 90)
            return "XC";
        else if (i == 50)
            return "L";
        else if (i == 40)
            return "XL";
        else if (i == 10)
            return "X";
        else if (i == 9)
            return "IX";
        else if (i == 5)
            return "V";
        else if (i == 4)
            return "IV";
        else if (i == 1)
            return "I";
        else return "";
    }
};