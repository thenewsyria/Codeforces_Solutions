n=int(input())
arr=list(map(int, input().split()))
b = [0] * n
for i in range(n):
    b[arr[i]-1]=i+1
print(*b)
