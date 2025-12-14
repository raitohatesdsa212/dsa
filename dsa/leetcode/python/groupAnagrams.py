#method 1 O(nlogn) using library C level
from collections import defaultdict
class Solution:
    def groupAnagrams(self, strs: list[str]) -> list[list[str]]:
        anagram_map = defaultdict(list)
        for s in strs:
            sorted_key = "".join(sorted(s))
            anagram_map[sorted_key].append(s)

        return list(anagram_map.values())

#method 2: O(nlogn) not using library
class Solution:
    def groupAnagrams(self, strs: list[str]) -> list[list[str]]:
        anaram = {}
        for s in strs:
            st = "".join(sorted.(s))
            if st not in anagram:
                anagram[st] = []
            anagram[st].append(s)
        return list(anagram.values())
    
#method 3: O(n.k)
from collections import defaultdict
class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        anagram_map = defaultdict(list)
        for s in strs:
            freq = [0] * 26
            for char in s:
                freq[ord(char) - ord('a')] += 1
            key = tuple(freq)
            anagram_map[key].append(s)
        return list(anagram_map.values())
        
