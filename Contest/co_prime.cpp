#include <iostream>
#include <cstdio> 
using namespace std;
typedef long long int lli;
lli phi(lli n) 
{ 
    lli result = n; // Initialize result as n 
    for (lli p = 2; p * p <= n; ++p) { 
        if (n % p == 0) { 
            while (n % p == 0) {
                n /= p; 
            }
            result -= result / p; 
        } 
    } 
    if (n > 1) {
        result -= result / n;
    }
    return result; 
}
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
