class Solution {
public:
    bool isHappy(int n) {

        if (n == 1) return true;
        
        unordered_map<int, bool> um;
        um[n] = true;

        int ret = 0;
        int currentN = n;
        while (ret != 1)
        {
            ret = 0;

            while (currentN > 0)
            {
                ret += (currentN % 10) * (currentN % 10);
                currentN /= 10;
            }

            if (um[ret]) return false;
            um[ret] = true;
            currentN = ret;
        }

        return true;
    }
};