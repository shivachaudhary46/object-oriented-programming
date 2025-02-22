//wap to show the switch case 
#include<iostream>
using namespace std;
float switch_case(char opp, int n1, int n2){
	switch(opp){
		case '+': 
			return n1 + n2;
			break;
		case '-': 
			return n1 - n2;
			break;
		case '*': 
			return n1 * n2;
			break;
		case '/': 
			return n1 / n2;
			break;
		default:
			return 0;		
	}
}
int main(){
	int n1, n2;
	cout<<"enter the two numbers : ";
	cin>>n1>>n2;
	char opp;
	cout<<"enter the operators(*, +, -, /): ";
	cin>>opp;
	cout<<switch_case(opp, n1, n2)<<endl;
	
}
