//wap to find the factorial of number using 
//non recursive function
//recursive function 
#include<iostream>
using namespace std;
int main(){
	int n, res = 1, i;
	cout<<"enter the number for the factorial: ";
	cin>>n;
	for(i=1; i<=n; i++){
		res = res * i ;
	}
	cout<<"the factorial number of "<<n<<" is : "<<res<<endl;
}
