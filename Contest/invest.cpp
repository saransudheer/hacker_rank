#include <bits/stdc++.h>
using namespace std;
int largest(int arr[], int n) 
{ 
    int i; 
      
    // Initialize maximum element 
    int max = arr[0]; 
  
    // Traverse array elements  
    // from second and compare 
    // every element with current max  
    for (i = 1; i < n; i++) 
        if (arr[i] > max) 
            max = arr[i]; 
  
    return max; 
} 
int lis( int arr[], int n )  
{  
    int lis[n];
    
   
    lis[0] = 1;    
    for (int i = 1; i < n; i++ )  
    { 
        lis[i] = 1; 
        for (int j = 0; j < i; j++ )   
            if ( arr[i] > arr[j] && lis[i] < lis[j] + 1)  
                lis[i] = lis[j] + 1;  
                
    }
    return largest(lis,n); 
}  
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	cout<<lis(a,n);
	return 0;
}
