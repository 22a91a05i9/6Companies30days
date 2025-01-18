class Solution:
    def minNonZeroProduct(self, p: int) -> int:
        MOD = 10**9 + 7
        n = 2**p - 1  
        result = (pow(n - 1, n >> 1, MOD) * n) % MOD
        return result
