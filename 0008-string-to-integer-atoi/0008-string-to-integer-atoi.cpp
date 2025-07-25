class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int n = s.length();

        // Rule 1: Whitespace
        while (i < n && s[i] == ' ') {
            i++;
        }

        // Rule 2: Signedness
        int sign = 1;
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        long long result = 0; // 오버플로우 방지를 위한 임시 저장소

        // Rule 3: Conversion & Rule 4: Rounding (Clamping)
        while (i < n && isdigit(s[i])) {
            result = result * 10 + (s[i] - '0');

            // 매번 숫자를 추가할 때마다 32비트 정수 범위를 체크
            if (sign * result > numeric_limits<int>::max()) {
                return numeric_limits<int>::max();
            }
            if (sign * result < numeric_limits<int>::min()) {
                return numeric_limits<int>::min();
            }
            i++;
        }

        return sign * result;
    }
};