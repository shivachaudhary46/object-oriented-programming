//wap to find simple interest 
#include<iostream>
using namespace std;
int main(){
	int p, t;
	float si, r;
	cout<<"enter the principal, time and rate: ";
	cin>>p>>t>>r;
	si = (p * t * r)/100;
	cout<<"the value of the simple interest: "<<si<<endl;
}
