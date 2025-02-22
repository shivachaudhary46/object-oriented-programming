//wap to overload function 
#include<iostream>
#include<cmath>
using namespace std;
int pi = 3.14;
int area(int a, int b){
	return a * b;
}
int area(int a){
	return (sqrt(3)/4) * a;
}
int area(float a){
	return a * a;
}
int area(double r){
	return pi * r * r;
}
int main(){
	int a, b;
	float c;
	double d;
	cout<<"enter the two intiger number : ";
	cin>>a>>b;
	cout<<"enter the float number: ";
	cin>>c;
	cout<<"enter the double number: ";
	cin>>d;
	cout<<"area square = "<<area(c)<<endl;
	cout<<"area circle = "<<area(d)<<endl;
	cout<<"area triangle = "<<area(a)<<endl;
	cout<<"area rectangle = "<<area(a, b)<<endl;
}
