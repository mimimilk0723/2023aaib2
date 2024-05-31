class Solution:
    def equalSubstring(self, s: str, t: str, maxCost: int) -> int:
            #先用python 把字串的迴圈寫出來
            ans=0
            N=len(s)
            j=0 #尾巴j

            for i in range(N):
                maxCost -= abs(ord(s[i])-ord(t[i])) #毛毛蟲的頭i 吃葉子
                while maxCost < 0: #預算不夠, 變負的
                    maxCost +=abs(ord(s[j])-ord(t[j])) #尾巴j 大便出來
                    j+=1 #尾巴j 往右縮
                ans = max(ans,i-j+1) #頭i, 尾j+1 就是毛毛蟲的長度
                
            return ans