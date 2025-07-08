class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> v(rowIndex + 1);

        for (int i = 0; i < rowIndex + 1; i++)
        {
            for (int nowPos = 0; nowPos <= i; nowPos++)
            {
                if (nowPos == 0 || nowPos == i)
                    v[i].push_back(1);
                else
                    v[i].push_back(v[i - 1][nowPos - 1] + v[i - 1][nowPos]);
            }
        }

        return v[rowIndex];
    }
};