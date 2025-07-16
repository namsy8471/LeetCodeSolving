class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        std::bitset<32> bs(n);
        for (int i = 0; i < 16; i++)
        {
            bool temp = bs[i];
            bs[i] = bs[31 - i];
            bs[31 - i] = temp;
        }

        return bs.to_ulong();
    }
};