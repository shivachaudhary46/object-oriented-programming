//lab 9 calculator
#include<iostream>
using namespace std;
class calculator{
		int x, y;
	public:
		//default constructor
		calculator(){
			cout<<"enter the two numbers x and y: ";
			cin>>x>>y;
		}
		//parameterized constructor
		calculator(int a, int b){
			x = a;
			y = b;
		}
		int sum(){
			return x + y;
		}
		int mul(){
			return x * y;
		}
		//copy constructor
		calculator(calculator &c){
			x = c.x;
			y = c.y;
		}
		
		void show(){
			cout<<"sum = "<<sum()<<endl;
			cout<<"mul = "<<mul()<<endl;
		}
};
int main(){
	calculator a;
	cout<<"the sum of object a = "<<a.sum()<<endl;
	cout<<"the mul of object a = "<<a.mul()<<endl;
	calculator b(4, 5);
	cout<<"the sum of object b = "<<b.sum()<<endl;
	cout<<"the mul of object b = "<<b.mul()<<endl;
	calculator c(b);
	cout<<"the sum of object c = "<<c.sum()<<endl;
	cout<<"the mul of object c = "<<c.mul()<<endl;
}
