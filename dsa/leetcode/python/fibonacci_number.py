#method 1: (fastest way) Dynamic programming
class Solution:
    dp = {}
    def fib(self, n: int) -> int:
        if n in self.dp:
            return self.dp[n]
            
        if n <= 1:
            return n
        result = self.fib(n-1) + self.fib(n-2)
        self.dp[n] = result
        return result

#method 2: (regular way) recursion
class Solution:
    def fib(self, n: int) -> int:
        if n<=1:
            return n
        return self.fib(n-1) + self.fib(n-2)
