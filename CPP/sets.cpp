#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    set<int>s;
    int n,query,val;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>query;
        if(query==1){
            cin>>val;
            s.insert(val);
        }
        else if(query==2){
            cin>>val;
            s.erase(val);            
        }
        else if(query==3){
            cin>>val;
            cout<<((s.find(val)==s.end())?"No":"Yes")<<endl;
        }
    }
    return 0;
}



