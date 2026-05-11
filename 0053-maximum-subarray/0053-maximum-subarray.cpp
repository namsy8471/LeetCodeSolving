class Solution {
public:
    int findMaxSubArray(vector<int>& nums, int left, int right)
    {
        if (left == right) return nums[left];

        int mid = (left + right) / 2;
        int leftMax = findMaxSubArray(nums, left, mid);
        int rightMax = findMaxSubArray(nums, mid + 1, right);

        int midLeftMax = nums[mid];
        int midRightMax = nums[mid];
        int curMax = nums[mid];

        for(int i = mid - 1; i >= left; i--)
        {
            curMax += nums[i];
            if(midLeftMax <= curMax)
                midLeftMax = curMax;
        }

        curMax = nums[mid];

        for(int i = mid + 1; i <= right; i++)
        {
            curMax += nums[i];
            if(midRightMax <= curMax)
                midRightMax = curMax;
        }

        int midMax = midLeftMax + midRightMax - nums[mid];

        return max({leftMax, rightMax, midMax});
    }

    int maxSubArray(vector<int>& nums) {
        
        return findMaxSubArray(nums, 0, nums.size() - 1);
    }
};