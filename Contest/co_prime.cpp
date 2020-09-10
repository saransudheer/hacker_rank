#include <iostream>
#include <algorithm>
using namespace std;
typedef long long int lli;
bool is_prime(int n) {
    if (n == 1) {
        return false;
    }
    int i = 2;
    while (i*i <= n) {        
        if (n % i == 0) {
            return false;
        }
        i += 1;
    }
    return true;
}
void printPrime(int n) 
{ 
    for (int i = 2; i <= n; i++) { 
        if (isPrime(i)) 
            cout << i << " "; 
    } 
} 
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
   

    
    return 0;
}
