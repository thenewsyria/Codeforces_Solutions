import math
n,t,k,d=list(map(int, input().split()))
g=math.ceil(n/k)
o1=0
o2=d
for i in range(g):
        if o1<=o2:o1+=t
        else: o2+=t
if max(o1,o2)<g*t:print("YES")
else:print("NO")