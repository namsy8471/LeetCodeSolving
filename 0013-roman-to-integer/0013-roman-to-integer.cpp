class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        char prev = -1;  
        
        for (auto c : s)  
        {  
            switch (c)  
            {  
                case 'M':
                    if (prev == 'C')
                        sum += 800;
                    else
                        sum += 1000;
                    break;

                case 'D':
                    if (prev == 'C')
                        sum += 300;
                    else
                        sum += 500;

                    break;

                case 'C':
                    if (prev == 'X')
                        sum += 80;
                    else
                        sum += 100;
                    break;

                case 'L':
                    if (prev == 'X')
                        sum += 30;
                    else
                        sum += 50;
                    break;

                case 'X':
                    if (prev == 'I')
                        sum += 8;
                    else
                        sum += 10;
                    break;

                case 'V':
                    if (prev == 'I')
                        sum += 3;
                    else
                        sum += 5;

                    break;

                case 'I':
                    sum += 1;
                    break;
                
                default:
                    break;
            }

            prev = c;
        }

        return sum;
    }
};