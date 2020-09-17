#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long int lli;
lli solve(lli a){
    lli sum=a, item=a/2;
    if (a==1){
        return 1;
    }
    for(int i=0; i<10; i++){    
        if(a%i==0 && a!=1){
            while(item>=1){
                sum +=item;
                item=int(item/2);
            }           
        }
    }
    return sum;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    scanf("%d",&n);
    lli sum=0;
    while(n!=0){
        lli item;
        scanf("%lli",&item);
        sum+=solve(item);
        n--;
    }
    printf("%lli",sum);
    return 0;
}
