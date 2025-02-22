//wap to convert one class time to another class minute(use method in source)
#include<iostream>
using namespace std;
//we can convert the one class to another class two ways : -> using constructor -> operator overloading 
//source class 
class Time{
	int hr, min;
	public:
		Time(int hr, int min){
			this->hr = hr;
			this->min = min;
		}
		int get_hr(){
			return hr;
		}
		int get_min(){
			return min;
		}
};

//destination class
class Minutes{
	int min;
	public:
		Minutes(){
			cout<<"enter the minutes: ";
			cin>>min;
		}
		//using constructor 
		Minutes(Time t1){
			//it will return the hour from class destination
			min = min + t1.get_hr() * 60;
			min = min + t1.get_min();
		}
		void display(){
			cout<<"the hour and min has been converted : "<<min<<endl;
		}
};
int main(){
	cout<<"enter the hour and minutes : ";
	int hr, min;
	cin>>hr>>min;
	Time t1(hr, min);
	//m1 destination t1 source;
	Minutes M1;
	M1 = t1;
	M1.display();
	
}
