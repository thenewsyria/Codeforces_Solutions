n , x = list(map(int, input().split()))
dist=0
for i in range(n):
 ch,num=list(map(str, input().split()))
 if ch=='+':x+=int(num)
 if ch=='-' and x>=int(num): x-=int(num)
 elif ch=='-'and x<int(num):
    dist+=1
   

print(x,dist)
  