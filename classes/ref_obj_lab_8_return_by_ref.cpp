//lab 8 passing object as argument
#include<iostream>
using namespace std;
class multipli{
		int x, y;
	public:
		void set(int i, int j){
			x = i;
			y = j;
		}
		multipli mul(multipli &a, multipli &b){
			multipli temp;
			temp.x = a.x * b.x;
			temp.y = a.y * b.y;
			return temp;
		}
		void show(){
			cout<<"mul x = "<<x<<endl<<"mul y = "<<y<<endl;
		}
};
int main(){
	multipli a, b, c;
	a.set(1, 3);
	b.set(3, 5);
	a = c.mul(a, b);
	a.show();
}
