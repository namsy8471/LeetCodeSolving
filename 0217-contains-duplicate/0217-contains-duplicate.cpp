class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        vector<int> newNum(nums.begin(), nums.end());
        newNum.erase(unique(newNum.begin(), newNum.end()), newNum.end());

        return nums.size() != newNum.size();
    }
};