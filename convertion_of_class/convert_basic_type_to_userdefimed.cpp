//wap to convert int to userdefined type(convert basic 95 minutes to hour and minutes )
#include<iostream>
using namespace std;
class user_define{
	int hr, min;
	public:
	user_define(int a){
		//divides the given intiger by 60 convert into hour 
		hr = a/60;
		//remainder will come in the minutes 
		min = a%60;
	}
	void display(){
		cout<<"hour : "<<hr<<" minutes : "<<min<<endl;
	}
};
int main(){
	int d;
	cout<<"enter the minutes to convert hour: ";
	cin>>d;
	//primitive types to userdefined types
	user_define t = d;
	t.display();
}
