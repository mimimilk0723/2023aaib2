class Solution:
    def equalSubstring(self, s: str, t: str, maxCost: int) -> int:
            #先用python 把字串的迴圈寫出來
            N=len(s)

            for i in range(N):
                print(s[i],t[i])

            ans = 0
            return ans