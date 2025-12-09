#method 1
#Big O notation: nlogn + nlogn = O(nlogn)
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        a = sorted(s)
        b = sorted(t)
        return a == b
#method 2
#Big O notation: len(s) + t == O(n)
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        freqs = {}
        freqt  = {}
        for i in s:
            freqs[i] = freqs.get(i, 0) + 1
        for j in t:
            freqt[j] = freqt.get(j, 0) + 1
        return freqs == freqt
#method 3:
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        array = [0] * 26
        for i in s:
            array[ord(i) - ord('a')] += 1
        for j in t:
            array[ord(j) - ord('a')] -= 1
        for a in array:
            if a != 0:
                return False
        return True
