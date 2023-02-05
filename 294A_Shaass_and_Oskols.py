n=int(input())
arr=list(map(int, input().split()))
kill=int(input())
for m in range(kill):
    i,j=list(map(int, input().split()))
    
    arr[i]+=arr[i-1]-j
    if i>1:arr[i-2]+=j-1
    if i==1:arr[i-2]+=0
    arr[i-1]=0
print(*arr,sep="\n")
    
