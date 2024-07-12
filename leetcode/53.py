class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        currSum = 0
        maxSub = 0
        k = 0
        for n in nums : 
            currSum += n 
            if currSum < 0 :
                currSum = 0
                k+=1
            maxSub = max(maxSub, currSum)
        if k == len(nums) : 
            # in the case nums contains only negative numbers 
            return max(nums)
        return maxSub

        