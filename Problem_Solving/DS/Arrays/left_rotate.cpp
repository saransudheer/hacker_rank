#include <bits/stdc++.h>
using namespace std;
int main()
{
    int siz,op;
    cin>>siz>>op;
    long int arr[siz]; 
    for(int i=0; i<siz; i++)
    {
        cin>>arr[i]; 
    }
    rotate(arr,arr+op,arr+siz);
    for(int i=0; i<siz; i++)
    {
        cout<<arr[i]<<" "; 
    }
    return 0;
}
