#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef long int lli;
bool is_prime(lli n) {
    if (n == 1) {
        return false;
    }
    lli i = 2;
    while (i*i <= n) {        
        if (n % i == 0) {
            return false;
        }
        i += 1;
    }
    return true;
}
lli countprime(lli n) 
{ 
    vector<lli>a;
    for (lli i = 2; i <= n; i++) { 
        if (is_prime(i)) 
        {
            a.push_back(i);
        }
    } 
    return a.size();
} 
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        lli b;
        cin>>b;
        cout<<countprime(b);     
    }

    
    return 0;
}
