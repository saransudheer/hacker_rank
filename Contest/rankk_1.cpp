#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int a[n], b[n], c[n], d[n], count=0, count1=0, count2=0, count3=0;
    for(int i=0; i<n; i++){
        cin>>a[i]>>b[i]>>c[i]>>d[i];
        if(a[i]>b[i]&&a[i]>c[i]&&a[i]>d[i]){
            count+=1;
        }
        else if (b[i]>c[i]&&b[i]>d[i]){
            count1+=1;
        }
        else if (c[i]>d[i]){
            count2 +=1;
        }
        else{
            count3 +=1;
        }
    }
    
    
    return 0;
}
