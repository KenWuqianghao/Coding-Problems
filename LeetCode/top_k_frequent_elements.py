class Solution(object):
    def topKFrequent(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """
        frequency = {}

        for num in nums:
            if num in frequency:
                frequency[num] += 1
            else:
                frequency[num] = 1

        output = []

        for i in range (0, k):
            max_key = max(frequency, key = frequency.get)
            output.append(max_key)
            del frequency[max_key]

        return output