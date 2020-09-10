
#include <map>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map<string,int>m;
    int n, val, query;
    string s;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>query;
        if(query==1){
            cin>>s>>val;
            if(m.find(s)==m.end()){
                m.insert(make_pair(s,val));
            }else{
                map<string,int>::iterator it=m.find(s);
                if(it!=m.end()){
                    it->second=(val+m[s]);
                }
            }
            
        }
        else if(query==2){
            cin>>s;
            m.erase(s);
        }
        else {
            cin>>s;
            
            cout<<m[s]<<endl;
        }
    }
    return 0;
}
