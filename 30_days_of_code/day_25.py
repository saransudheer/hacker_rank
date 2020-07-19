""" 
a=[]
n=int(input())
for _ in range(0,n):
    b=int(input())
    a.append(b)

for i in range(0,n):
    c=a[i]
    for v in range(2,c):
        if (c%v==0):
            print("Prime")
            break
    else:
        print("Not prime") 
"""
import math
def is_prime(n):
    if n<=1:
        return False
    sqrt_n=math.sqrt(n)
    if sqrt_n.is_integer():
        return False
    for i in range(2,int(sqrt_n)+1):
        if (n%i==0):
            return False
    return True
    

n=int(input())
for _ in range(0,n):
    b=int(input())
    if is_prime(b):
        print("Prime")
    else:
        print("Not prime")
