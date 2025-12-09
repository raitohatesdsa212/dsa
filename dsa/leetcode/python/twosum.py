#method 1:
#Big O notation: Brute-force-> O(n^2)
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for i in range(len(nums)):
            for j in range(i+1, len(nums)):
                if nums[i] + nums[j] == target:
                    return [i, j]
#method 2:
#Big O notation: Dictionaries complement -> O(n)
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        com = {}
        for i, num in enumerate(nums):
            if num in com:
                return [com[num], i]
            else:
                complement = target - num
                com[complement] = i