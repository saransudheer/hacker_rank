import sys

n = int(input().strip())
a = list(map(int, input().strip().split(' ')))
# Write Your Code Here
numofswaps=0
temp=0

for i in range(n):
    
    for j in range(n-1):
        if(a[j]>a[j+1]):
            temp=a[j]
            a[j]=a[j+1]
            a[j+1]=temp
            numofswaps+=1
    if (numofswaps==0):
        break

print("Array is sorted in "+str(numofswaps)+" swaps.")
print("First Element: "+str(a[0]))
print("Second Element: "+str(a[n-1]))
