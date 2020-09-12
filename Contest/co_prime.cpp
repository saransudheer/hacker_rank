#include <iostream>
#include <cstdio> 
#include <cmath>
using namespace std;
typedef long long int lli;
typedef long double ld;
lli phi(lli n) 
{ 
    ld result = n; // Initialize result as n 
    for (lli p = 2; p * p <= n; ++p) { 
        if (n % p == 0) { 
            while (n % p == 0) {
                n /= p; 
            }
            result *= (1.0 - (1.0 / (ld)p)); 
        } 
    } 
    if (n > 1) {
        result *= (1.0 - (1.0 / (ld)n)); 
    }
    return (lli)(ceil(result)); 
} 
  
// Driver program to test above function 
int main() 
{ 
    int n; 
    cin>>n;
    for (int i= 0; i<n; i++) {
        lli b; 
        scanf("%lli",&b);
        printf("%lli\n",phi(b)); 
    }
    return 0; 
} 
