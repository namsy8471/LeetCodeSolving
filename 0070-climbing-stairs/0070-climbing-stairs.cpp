class Solution {
public:
    int climbStairs(int n) {
        vector<int> v(45);

        v[0] = 1;
        v[1] = 2;

        for (int i = 2; i < 45; i++)
            v[i] = v[i - 1] + v[i - 2];

        return v[n - 1];
    };
};