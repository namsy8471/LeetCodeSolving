// 함수 외부(클래스 밖 혹은 안의 static)에 두면 전역적으로 한 번만 실행됩니다.
static const int speedup = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return 0;
}();

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - 1; i++)
        {
            if(nums[i] == nums[i + 1]) return true;
        }

        return false;
    }
};