class Calculator:
    def power(self,x,y):
    
        if (x and y > 0):
            a=pow(x,y)
            return a

        else:
            raise Exception("n and p should be non-negative")

myCalculator=Calculator()
T=int(input())
for i in range(T):
    n,p = map(int, input().split())
    try:
        ans=myCalculator.power(n,p)
        print(ans)
    except Exception as e:
        print(e)   