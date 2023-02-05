x,y,z=list(map(int, input().split()))
arr=list(map(int, input().split()))
res=0
ans=0
for i in range(len(arr)):
    if arr[i]<=y:res+=arr[i]
    if(res>z):
        ans+=1
        res=0

print(ans)