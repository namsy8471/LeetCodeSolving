class Solution {
public:
    string addBinary(string a, string b) {
        string ret(max(a.length(), b.length()) + 1, ' ');
        int carry = 0;

        int i = a.length() - 1;
        int j = b.length() - 1;
        int k = ret.length() - 1;

        while (i >= 0 || j >= 0 || carry)
        {
            int sum = carry;

            if (i >= 0)
                sum += a[i--] - '0';
            if (j >= 0)
                sum += b[j--] - '0';

            ret[k--] = (sum % 2) + '0';
            carry = sum / 2;
        }

        if (ret[0] == ' ') return ret.substr(1);

        return ret;
    }
};