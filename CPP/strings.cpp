#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a;
    string b;
    /*cin.ignore();
    getline(cin,a);
    getline(cin,b); 
    */
    cin>>a>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<a+b<<endl;
    char temp=a[0];
    char temp1=b[0];
    a[0]=temp1;
    b[0]=temp;
    cout<<a<<" "<<b;
	
    return 0;
}
