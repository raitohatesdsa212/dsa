class Solution:
    def conquer(self, left: List[int], right: List[int]) -> List[int]:
        mem = []
        i = j = 0
        while i < len(left) and j < len(right):
            if left[i] < right[j]:
                mem.append(left[i])
                i += 1
            else:
                mem.append(right[j])
                j += 1 
        mem.extend(left[i:])
        mem.extend(right[j:])
        
        return mem
    
    def sortArray(self, nums: List[int]) -> List[int]:
        if len(nums) <= 1:
            return nums
        
        mid = len(nums) // 2
        left = self.sortArray(nums[:mid])
        right = self.sortArray(nums[mid:])
        
        return self.conquer(left, right)

