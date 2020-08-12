#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a,i;
    cin>>a;
    int b[a];
    for(i=0;i<a;i++)
    {
        cin>>b[i];
    }   
    for(i=a-1;i>=0;i--)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}
