//wap to convert userdefined to basic types 
#include<iostream>
using namespace std;
class user_defined{
	int hr, min;
	public:
	user_defined(int , int);
	/*to convert from basic to userdefined we can do by constructor but 
	in the convert of userdefined to basic types we use "operator" keyword and data_types*/
	/*operator int() it only takes the operator as a */
	operator int();	
};
user_defined::user_defined(int hr, int min){
	this->hr = hr;
	this->min = min;
}
user_defined::operator int(){
	//after constructor hour will multiply 60 and add with minutes 
	return (hr * 60 + min);
}
int main(){
	cout<<"enter hour and minutes to convert basic types: ";
	int hr, min;
	cin>>hr>>min;
	user_defined t(hr, min);
	int d = t;
	//hour and minutes convert to basic types 
	cout<<"converted time : "<<d<<endl;
}
