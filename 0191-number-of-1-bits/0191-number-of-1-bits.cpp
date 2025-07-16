class Solution {
public:
    int hammingWeight(int n) {
        std::bitset<32> bs(n);

        int ret = 0;
        for (int i = 0; i < 32; i++)
        {
            if (bs[i] == 1) ret++;
        }

        return ret;
    }
};