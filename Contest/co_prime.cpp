#include <iostream>
#include <algorithm>
using namespace std;
typedef long int lli;
lli gcd(lli a, lli b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
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
