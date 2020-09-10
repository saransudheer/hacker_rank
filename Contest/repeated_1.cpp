#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n, key, key1;
    cin>>n;
    int a[n],b[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }  
    cin>>key1;
    sort(a,a+n);
    for(int i=0; i<n; i++){
        b[i]=a[i];
    }
    int j=0;
    bool g=true;
    while(g==true && j<n){
        key=b[j];
        auto it = lower_bound(b,b+n,key);
        auto tt = upper_bound(b,b+n,key); 
        int occ=((tt-b)-(it-b));
        if(occ==key1){
            cout<<b[j];
            g=false;
        } 
        else{
            j++;
        }
    }
   
    return 0;
 }
