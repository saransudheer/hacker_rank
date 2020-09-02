#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int b,k,sum=0;
	cin>>b>>k;
	int c[k],n[k];
	
	for(int i=0; i<k; i++){
		cin>>c[i];
	}
	for(int i=0; i<k; i++){
		n[i]= (pow(b,k-(i+1)))*c[i];
		sum += n[i];
	}
	if(sum%2==0){
		cout<<"even";
	}
	else{
		cout<<"odd";
	}
	return 0;
}
