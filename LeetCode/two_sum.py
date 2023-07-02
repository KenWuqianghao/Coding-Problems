class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """

        hash = set()

        for num in nums:
            hash.add(num)

        for i in range (len(nums)):
            needed = target - nums[i]
            if needed in hash:
                for j in range(i + 1, len(nums)):
                    if nums[j] == needed:
                        return [i, j]
