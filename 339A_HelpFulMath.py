arr=input()
b=[]
if len(arr)==1:print(arr)
else:
    for i in range(0,len(arr),2):
        b.append(arr[i])
    b.sort()  

    print(*b)
