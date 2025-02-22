//wap to overload function 
#include<iostream>
#include<cmath>
using namespace std;
int pi = 3.14;
int area(int a, float b){
	return a * b;
}
int area(int a, int b, int c = 5){
	int s = (a + b + c )/ 2;
	return (sqrt(s*(s-a)*(s-b)*(s-c)));
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
	cout<<"area square = "<<area(a, c)<<endl;
	cout<<"area circle = "<<area(d)<<endl;
	cout<<"area triangle = "<<area(a, b)<<endl;

}
