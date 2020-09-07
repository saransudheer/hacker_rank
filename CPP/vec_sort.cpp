#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector<int>a;  
    int n,temp;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>temp;
        a.push_back(temp);
    }
    sort(a.begin(),a.end());
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
