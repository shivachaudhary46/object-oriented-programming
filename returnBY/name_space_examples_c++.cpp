//wap and create namespace with different function and data. perform following ?scope resolut
//to access the data 
//using keyword 
#include<iostream>
using namespace std;
namespace My_name{
	//properties jastai vayo
	int a = 10;
	
	//methods 
	void show(int n){
		if(n>a){
			cout<<"a = "<<a<<" is less than n = "<<n<<endl;
		}else{
			cout<<"a = "<<a<<" is greater than n = "<<n<<endl;
		}
	}
	
}
int main(){
//	using namespace My_name;
	cout<<My_name::a<<endl;
	My_name::show(3);
}
