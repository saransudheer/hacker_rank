#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long int n;
    int count=0;
    cin>>n;
    int a[6]={1,5,10,20,50,100};
    int i=5;
    while(n!=0){        
        if(int(n/a[i])!=0){
            count+=int(n/a[i]);
            n = n - (int(n/a[i])*a[i]);
        }
        i--;
    }/*
    for(int i=5; i>=0; i--){
        if(n==0){
            continue;
        }else if(n%a[i]!=n){
            count =int(n/a[i]);
            n = n - (int(n/a[i])*a[i]);
            
        }  
        
    } */
    cout<<count;
    return 0;
}
