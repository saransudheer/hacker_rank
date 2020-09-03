#include <bits/stdc++.h> 
#include <stdio.h> 
using namespace std; 
#define lli long long int 
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
void printSubset(lli n, int k) 
{ 
    vector<lli> answer; 
    
  
    while(n > 0) 
    { 
          
        // Nearest power of 2<=N 
        lli p = log2(n); 
  
        // Now insert k^p in the answer 
        answer.push_back(binpow(k, p)); 
  
        // update n 
        n %= (int)binpow(2, p); 
    } 
      
     
    reverse(answer.begin(), answer.end()); 
    cout<<answer.size()<<endl;
    for(auto x: answer) 
    { 
        cout << x << " "; 
        
    } 
    cout<<endl;
} 
  

int main() 
{ 
    
    int k = 5; 
    int n;
    cin>>n;
    lli a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        
        printSubset(a[i], k);
        
    }
  
     
}
