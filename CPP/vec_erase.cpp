#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/*
Removes the element present at position.  
Ex: v.erase(v.begin()+4); (erases the fifth element of the vector v)
Removes the elements in the range from start to end inclusive of the start and exclusive of the end.
Ex:v.erase(v.begin()+2,v.begin()+5);(erases all the elements from the third element to the fifth element.) */


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n, temp,b,c,d;
    vector<int> a;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>temp;
        a.push_back(temp);
    } 
    cin>>b>>c>>d;
    a.erase(a.begin()+b);
    a.erase(a.begin()+c-1,a.begin()+d-1);
    cout<<a.size()<<endl;
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<' ';
    }
    return 0;
}
