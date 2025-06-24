class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        digits[digits.size() - 1]++;

        for (int i = digits.size() - 1; i >= 0; i--)
        {
            if (digits[i] != 10) continue;

            digits[i] = 0;
            if (i == 0)
            {
                digits.insert(digits.begin(), 1);
            }
            else
            {
                digits[i - 1]++;
            }
        }

        return digits;
    }
};