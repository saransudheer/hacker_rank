#include <iostream>
#include <cstdio>
int max_of_four(int a,int b,int c,int d)
{
    if (a>b && a>c && a>d)
    {
        return a;
    }
    else if(b>c and b>d and b>a)
    {
        return b;
    }
    else if(c>d and c>b and c>a)
    {
        return c;
    }
    else 
        return d;
}


using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

