class Solution {
public:
    int mySqrt(int x) {
        long long left = 0;
        long long right = x;

        int max = 0;

        while (left <= right)
        {
            long long mid = left + (right - left) / 2;
            
            if (mid * mid > x) right = mid - 1;
            else
            {
                left = mid + 1;
                max = mid;
            }
        }

        return max;
    }
};