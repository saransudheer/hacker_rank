#include <iostream>
    using namespace std;
    int largest(int m, int n) 
    { 
        int maxx=n; 
        int max = m; 
        if (max>maxx){
			 return max;
		 }else{
			 return maxx;
		 }		   
        
    } 
    int main ()
    {
        int n , i , cnt=0, com=1 ;
        cin>>n;
        int ar[n];
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
            if(ar[i]>=ar[i-1])
            {
                cnt++;
                com = largest(com,cnt);
            }
            else
            {
               cnt=1;
            }
        }
        cout<<com<<endl;
        return 0;
    }
