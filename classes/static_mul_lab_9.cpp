//lab 9 calculator
#include<iostream>
using namespace std;
class calculator{
	public:
		static int y;
		static int mul(){
			y *= y;
		}
		void show(){
			cout<<"mul = "<<mul()<<endl;
		}
};
int calculator::y = 4;
int main(){
	
	cout<<"before calling static function = "<<calculator::y<<endl;
	calculator::mul();
	cout<<"after calling static function 1 = "<<calculator::y<<endl;
	calculator::mul();
	cout<<"after calling static function 2 = "<<calculator::y<<endl;
	calculator::mul();
	cout<<"after calling static function 3 = "<<calculator::y<<endl;
}
