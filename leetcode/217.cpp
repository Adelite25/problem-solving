class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::set<int> uniqueNums(nums.begin(), nums.end());
        return nums.size() != uniqueNums.size();
    }
};
