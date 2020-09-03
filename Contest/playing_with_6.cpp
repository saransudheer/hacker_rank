#include <iostream>
using namespace std;
long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int b,k,sum=0;
    cin>>b>>k;
    int c[k],n[k];
    
    for(int i=0; i<k; i++){
        cin>>c[i];
    }
    for(int i=0; i<k; i++){
        n[i]= (binpow(b,k-(i+1)))*c[i];
        sum += n[i];
        
    }
    
    if(sum%2==0){
        cout<<"even";
    }
    else{
        cout<<"odd";
    }
    return 0;
}
