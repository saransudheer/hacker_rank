def is_leap(year):
    leap = False
    
    # Write your logic hereturn
    if(year==2100):
        leap=False
    elif(year%4==0):
        leap=True
    
    return leap

year = int(input())
print(is_leap(year))
