#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int b,k;
	long long int n=0;
	cin>>b>>k;
	int c[k];
	for(int i=0; i<k; i++){
		cin>>c[i];
	}
	for(int i=0; i<k; i++){
		n += pow((c[i]*b),k-1);
	}
	if(n%2==0){
		cout<<"even";
	}
	else{
		cout<<"odd";
	}
	return 0;
}
