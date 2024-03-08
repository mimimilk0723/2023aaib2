class Solution:
    def maxFrequencyElements(self, nums: List[int]) -> int:
        T=[0]*101 #統計數字出現,因數字有1-100,陣列要開101個
        best=0#最多的數字,出現幾次呢?
        for num in nums: #迴圈.針對每個數字做處理
            T[num]+=1 #這個數字num出現次數+1
            if T[num]>best:best=T[num] #最多出現的T統計數字 是多少
            #到這裡,T就有全部的數字出現的次數了,且best就是最多的數字
            #把全部最多的加起來
        total=0
        for t in T: #針對統計結果T裡面的個數字t
            if t==best: total += t
        return total
