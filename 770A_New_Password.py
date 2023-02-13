n,k=input().split()


s="abcdefghijklmnopqrstuvwxyz"
s2=''

for i in range(int(n)):
    s2+=s[i%int(k)] 
print(s2)