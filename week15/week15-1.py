class Solution:
    def duplicateNumbersXOR(self, nums: List[int]) -> int:
        table={} #大括號dict table[num]對應的次數
        for num in nums: #每個數字輪一次
            if num in table: #出現過的話
                table[num] += 1 #第一次出現
            else:
                table[num] = 1 #第一次出現
        #print(table)    #答案還沒算出來
        
        ans=0
        for num in table:   #把table裡全部的數字輪一次
            if table[num] == 2: #如果數字剛好出現2次
                ans=ans^num    #把答案,照題目要求XOR混起來
        return ans
        