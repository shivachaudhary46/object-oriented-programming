//wap to illustrate use of the default argument 
#include<iostream>
using namespace std;
int default_arg(int a, int b, int c = 3){
	return a + b + c;
}
int second_default_arg(int a, int b=3){
	return a * b;
}
int main(){
	int a, b, c;
	cout<<"enter the three number : ";
	cin>>a>>b>>c;
	cout<<"sum = "<<default_arg(a, b)<<endl;
	cout<<"mul = "<<second_default_arg(a, b)<<endl;
}
