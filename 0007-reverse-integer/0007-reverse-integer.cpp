class Solution {
public:
    int reverse(int x) {
        
        int ret = 0;
        while (x != 0)
        {
            int pop = x % 10;
            x /= 10;

            if (ret > std::numeric_limits<int>::max() / 10 || (ret == std::numeric_limits<int>::max() / 10 && pop >= 7)) return 0;
            if (ret < std::numeric_limits<int>::min() / 10 || (ret == std::numeric_limits<int>::min() / 10 && pop <= -8)) return 0;

            ret = ret * 10 + pop;
        }

        return ret;
    }
};