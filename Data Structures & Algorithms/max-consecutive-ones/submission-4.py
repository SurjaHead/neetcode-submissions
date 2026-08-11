class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        counter = record = 0
        for i in range(len(nums)):
            if (nums[i]):
                counter += 1
            else:
                record = max(counter, record)
                counter = 0
        return max(counter, record)

