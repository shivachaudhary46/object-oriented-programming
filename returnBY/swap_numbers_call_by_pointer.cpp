//wap to swap two number using call by reference 
#include<iostream>
using namespace std;
void swap_numbers(int *n1, int *n2){
	int temp;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}
int main(){
	cout<<"enter the two numbers : ";
	int n1, n2;
	cin>>n1>>n2;
	cout<<"before swap: "<<n1<<" "<<n2<<endl;
	swap_numbers(&n1, &n2);
	cout<<"after swap: "<<n1<<" "<<n2;
}
