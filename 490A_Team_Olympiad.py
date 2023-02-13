n=int(input())
arr=list(map(int, input().split()))
programming=[]
maths=[]
ph=[]
for i in range(n):
    if arr[i]==1:programming.append(i+1)
    elif arr[i]==2:maths.append(i+1)
    elif arr[i]==3:ph.append(i+1)
minimum=min(len(programming),len(maths),len(ph))
print(minimum)

for j in range(minimum):
    print(programming[j],maths[j],ph[j])