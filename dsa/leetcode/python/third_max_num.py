#method 1: O(nlogn)
class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        arr = list(set(nums))
        if len(arr) <=2:
            return max(arr)
        arr.sort(reverse=True)
        return arr[2]

#method 2: O(6n) ~ O(n)
class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        arr = list(set(nums))
        if len(arr) <=2:
            return max(arr)
        for i in range(2):
            n = max(arr)
            arr.pop(arr.index(max(arr)))
        return max(arr)
#method 3: real O(n) - fastest way
class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        nums = list(set(nums))
        if len(nums) <=2:
            return max(nums)
        max1 = max2 = max3 = -2**32
        for num in nums:
            if num > max1:
                max3 = max2
                max2 = max1
                max1 = num
            elif num > max2:
                max3 = max2
                max2 = num
            elif num > max3:
                max3 = num
        return max3
