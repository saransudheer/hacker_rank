
#include <iostream>
#include <algorithm>
using namespace std;
typedef long int li;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    li n;
    int count=0;
    cin>>n;
    int a[5]={1,5,10,20,100};
    int i=4;
    while(i!= -1 || n!=0){        
        if(li(n/a[i])!=0){
            count += int(n/a[i]);
            n = (n - (li(n/a[i])*a[i]));
        }
        i--;
    } 
    cout<<count;
    return 0;
}
