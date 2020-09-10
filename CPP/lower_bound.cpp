#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,m,key;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cin>>m;
    for(int i=0; i<m; i++){
        cin>>key;
        bool present=binary_search(a,a+n,key);
        if(present){
            auto it=lower_bound(a,a+n,key);
            cout<<"Yes"<<" "<<(it-a)+1<<endl;
        }else{
            auto it=lower_bound(a,a+n,key);
            cout<<"No"<<" "<<(it-a)+1<<endl;
        }
        

    }
    return 0;
}
