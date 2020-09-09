#include <iostream>
#include <algorithm>
using namespace std;
int MAX_INT(int arr[],int s)
{
    return max_element(arr, arr + s) - arr;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int a[n], b[n], c[n], d[n], sum[n];
    for(int i=0; i<n; i++){
        cin>>a[i]>>b[i]>>c[i]>>d[i];
        sum[i]=a[i]+b[i]+c[i]+d[i];        
    
    }    
    cout<<MAX_INT(sum,n)+1;
    return 0;
}
