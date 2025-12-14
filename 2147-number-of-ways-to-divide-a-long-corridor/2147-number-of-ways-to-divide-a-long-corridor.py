class Solution:
    def numberOfWays(self, corridor: str) -> int:
        mod = 10**9 + 7
        zero = 0
        one = 0
        two = 1
        for i in corridor:
            if i == 'S':
                zero = one
                one, two = two, one
            else:
                two = (two + zero) % mod
        return zero