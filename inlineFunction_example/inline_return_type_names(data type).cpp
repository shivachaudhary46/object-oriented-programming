#include<iostream>
using namespace std;
inline int square(int n){
	return n*n;
}
inline int cube(int n){
	return n*n*n;
}
int main(){
	int n;
	cout<<"enter the numbers : ";
	cin>>n;
	cout<<"the square of the n = "<<n<<" is "<<square(n)<<endl;
	cout<<"the square of the 2 = "<<" is "<<square(2)<<endl;
	cout<<"the square of the 3 = "<<" is "<<square(3)<<endl;
	cout<<"the cube of the n = "<<n<<" is "<<cube(n)<<endl;
}
