//wap to swap two number using call by reference 
#include<iostream>
using namespace std;
int recur(int n){
	if(n<=1){
		return 1;
	}else{
		return (n * recur(n-1));
	}
}
int main(){
	cout<<"enter the numbers : ";
	int n;
	cin>>n;
	int res = recur(n);
	cout<<"the factorial number of "<<n<<" is "<<res<<endl;
}
