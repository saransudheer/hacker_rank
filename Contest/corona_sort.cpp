#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector<int>a;
    vector<int>comper;
    int n,val;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>val;
        a.push_back(val);
        comper.push_back(val);
    }
    sort(comper.begin(),comper.end());
    if(a==comper){
        cout<<comper.size();        
    }
    else{
        int m=a.size()/2;
        int b[m];
        for(int i=0; i<m; i++){
            comper.pop_back();            
        }
        for(int i=m-1; i>=0; i--){
            comper.push_back(a[i]);            
        }
        cout<<comper.size();
    }
    return 0;
}
