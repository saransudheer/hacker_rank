
#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long int lli;
bool isprime(lli a){
    int i=2;
    while(i<=a/2){
        if(a%i==0){
            return false;
            exit(0);
        }
        i++;
    }
    return true;
}
lli solve(lli a){
    int sum=a, item=a/2;
    if (a==1){
        return 1;
    }
    else if(isprime(a)==true && a!=1){
        return a+1;
        exit(0);
    }
    else{
        while(item>=1){
            sum +=item;
            item=int(item/2);
        }
        return sum;
    }
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
