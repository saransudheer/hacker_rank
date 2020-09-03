#include <bits/stdc++.h> 
#include <stdio.h> 
using namespace std; 
#define lli long long int 
void printSubset(lli n, int k) 
{ 
    vector<lli> answer; 
    
  
    while(n > 0) 
    { 
          
        // Nearest power of 2<=N 
        lli p = log2(n); 
  
        // Now insert k^p in the answer 
        answer.push_back(pow(k, p)); 
  
        // update n 
        n %= (int)pow(2, p); 
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
