#include <iostream>
#include <cmath>
using namespace std;
int countDigit(int n) 
{ 
    return floor(log10(n) + 1); 
} 
int divi(int n){
	if(n%8==0){
		return n;
	}
	else{
		return -1;
	}
}
int numbigame(int a){
	if(divi(a)>0){
		return a;
	}else{
		int n=countDigit(a);
		int b[n];
		for(int i=0; i<n/2; i++){
			b[i]=a%10
			if(divi(a)>0){
				return a;
				continue;
			}
							
	}
		
	
	
	
	
