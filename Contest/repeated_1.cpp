#include <iostream>
#include <algorithm>
using namespace std;
int MAX_INT(int arr[],int s)
{
    return max_element(arr, arr + s) - arr;
}
int main(){
    int n,key, key1;

    cin>>n;
    int a[n], occ[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }  
    cin>>key1;
    sort(a,a+n);
    for(int i=0; i<n; i++){
        key1=a[i];
        auto it = lower_bound(a,a+n,key);
        auto tt = upper_bound(a,a+n,key); 
        occ[i]=((tt-a)-(it-a));
    }
    bool present = binary_search(occ,occ+n,key1);
    if(present=1){
        
        cout<<
    }
   
    return 0;
 }
