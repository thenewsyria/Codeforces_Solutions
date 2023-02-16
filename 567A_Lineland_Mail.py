n=int(input())
arr=list(map(int, input().split()))
for i in range(n):
    if i==0:
        minimum=abs( arr[i]-arr[i+1])
        maximum=abs(arr[-1]-arr[i])
        print(minimum,maximum)
    if i==n-1:
        minimum=arr[-1]-arr[-2]
        maximum=arr[-1]-arr[0]
        print(minimum,maximum)

    if i!=0 and i!=n-1:
        min_number=min(abs(arr[i]-arr[i-1]),abs(arr[i]-arr[i+1]) )
        max_number=max(abs(arr[-1]-arr[i]),abs(arr[i]-arr[0]))
        print(min_number,max_number)
