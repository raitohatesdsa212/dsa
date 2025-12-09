#best method 0ms runtime 
#Big O notation: O(nlogn) because sorting

class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        main_array = nums1 + nums2
        main_array.sort()
        n = len(main_array)
        mean = 0
        if n % 2 != 0:
            mean = float((main_array[n//2]))
        else:
            mean = float((main_array[int(n/2)] + main_array[int((n/2)-1)]) / 2)
        return float("{:.5f}".format(mean))
    