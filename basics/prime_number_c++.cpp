#include<iostream>
using namespace std;
bool prime_numbers(int n){
	if(n <= 1){
		return false;
	}
	for(int i = 2; i <= n / 2; i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	cout<<"enter the numbers to iterate : ";
	int n;
	cin>>n;
	for(int i = 0; i <= n; i++){
		prime_numbers(i) ? cout<<i<<" true"<<endl : cout<<i<<" false"<<endl;
	}
}
