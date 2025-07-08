class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v(numRows);

        for (int i = 0; i < numRows; i++)
        {
            for (int nowPos = 0; nowPos <= i; nowPos++)
            {
                if (nowPos == 0 || nowPos == i)
                    v[i].push_back(1);
                else
                    v[i].push_back(v[i - 1][nowPos - 1] + v[i - 1][nowPos]);
            }
        }

        return v;
    }
};