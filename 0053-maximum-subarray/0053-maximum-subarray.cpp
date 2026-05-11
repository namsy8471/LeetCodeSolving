class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int currentSum = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            currentSum += nums[i];

            if(maxSum < currentSum) maxSum = currentSum;
            if(currentSum < 0)
            {
                currentSum = 0;
            }
        }

        return maxSum;
    }
};