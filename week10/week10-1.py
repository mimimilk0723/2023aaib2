#week10-1.py 函式呼叫函式Recursion遞迴N階層
N =int(input('請輸入N:'))
#以前是用 for迴圈寫, 今天{函式呼叫函式}來寫
def func(n):
  if n==1: return 1 #終止條件, 像{數學歸納法}N=1成立
  return n * func(n-1) #函式呼叫函式,把大問題 改成小問題
ans = func(N)
print(ans)