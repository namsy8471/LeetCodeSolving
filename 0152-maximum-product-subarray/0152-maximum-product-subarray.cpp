class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int size = nums.size();
        
        int max = nums[0];
        int max_cur = nums[0];
        int min_cur = nums[0];

        for(int i = 1; i < size; i++)
        {
            int curNum = nums[i];
            int prev_min = min_cur;
            min_cur = std::min({curNum, min_cur * curNum, max_cur * curNum});
            max_cur = std::max({curNum, prev_min * curNum, max_cur * curNum});
            max = std::max(max, max_cur);
        }

        return max;
    }
};