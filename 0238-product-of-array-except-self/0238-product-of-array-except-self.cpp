class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> lMul(nums.size(), 1);
        vector<int> rMul(nums.size(), 1);

        for(int i = 1; i < nums.size(); i++)
        {
            lMul[i] *= lMul[i - 1] * nums[i - 1]; 
        }

        for(int i = nums.size() - 2; i >= 0; i--)
        {
            rMul[i] *= rMul[i + 1] * nums[i + 1];
        }

        for(int i = 0; i < nums.size(); i++)
        {
            nums[i] = lMul[i] * rMul[i];
        }

        return nums;
    }
};