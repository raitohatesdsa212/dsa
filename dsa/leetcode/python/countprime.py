from math import isqrt
from bisect import bisect_left


#method 1:
class Solution:
    def countPrimes(self, n: int) -> int:
        count  = 0
        if n > 1:
            limit = int(mt.sqrt(n) + 1)
            array = [True] * n
            array[0] = False
            array[1] = False
            for p in range(2, limit):
                if array[p] == True:
                    for i in range(p*p, n, p):
                        array[i] = False
            for j in array:
                if j:
                    count += 1
        return count

#method 2
LIMIT = 5 * 10**6
is_prime = [True] * (LIMIT + 1)
is_prime[0] = is_prime[1] = False
#eratosthenes
for i in range(2, isqrt(LIMIT) + 1):
    if is_prime[i]:
        is_prime[i*i : LIMIT + 1 : i] = [False] * len(is_prime[i*i : LIMIT + 1 : i])

primes = [i for i, prime in enumerate(is_prime) if prime]

class Solution:
    def countPrimes(self, n: int) -> int:
        # Tìm vị trí của n trong mảng primes
        # bisect_left trả về số lượng phần tử nhỏ hơn n
        return bisect_left(primes, n)
    
