class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = 0, maxSum = 0 ;
        int k = 0;

        for (int n : nums){
            currSum += n;
            if (currSum < 0){
                currSum = 0;
                k++ ;
            }
            maxSum = std::max(maxSum, currSum);    
        }
        if (k == nums.size()){
            return *std::max_element(nums.begin(), nums.end());
        }
        return maxSum;

    }
};
