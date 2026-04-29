class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        int originSize = nums.size();
        nums.erase(unique(nums.begin(), nums.end()), nums.end());

        return nums.size() != originSize;
    }
};