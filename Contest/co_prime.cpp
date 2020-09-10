#include <iostream>
#include <algorithm>
using namespace std;
typedef long int lli;
lli gcd(lli x,lli y)  
{  
    int minimum = min(x, y); 
    if (x % minimum == 0 && y % minimum == 0) 
        return minimum; 
    for (lli i = minimum / 2; i >= 2; i--) { 
  
        if (x % i == 0 && y % i == 0) 
            return i; 
    } 
    return 1; 

    //return gcd(b % a, a);  
}  

lli countprime(lli n)  
{  
    lli result = 1;  
    for (lli i = 2; i < n; i++)  {
        if (gcd(i, n) == 1)  {
            result++;             
        }
    }
             
    return result;  
}  

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        lli b;
        cin>>b;
        cout<<countprime(b)<<endl;     
    }

    return 0;
}
