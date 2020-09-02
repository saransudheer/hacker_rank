#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int count(string a, string b, int m, int n) 
{ 
    if ((m == 0 && n == 0) || n == 0) 
        return 1; 
        
    if (m == 0) 
        return 0; 
  
    if (a[m - 1] == b[n - 1]) 
        return count(a, b, m - 1, n - 1) + 
               count(a, b, m - 1, n); 
    else
        
        return count(a, b, m - 1, n); 
} 

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    string s;
    cin>>s;
    string b="LOL";
    
    int n=s.length();
    
    cout<<count(s,b,n,3);
    return 0;
}

