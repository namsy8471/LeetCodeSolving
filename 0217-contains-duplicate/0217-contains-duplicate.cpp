class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> m;

        for(auto num : nums){
            if(m[num] >= 1) return true;
            m[num]++;
        }

        return false;
    }
};