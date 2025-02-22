//lab 7 passing object as argument
#include<iostream>
using namespace std;
class complex{
		int real, img;
	public:
		void set_data(int r, int i){
			real = r;
			img = i;
		}
		complex mul(complex &a, complex &b){
			complex temp;
			temp.real = a.real * b.real - a.img * b.img;
			temp.img = a.real * b.img + a.img*b.real;
			return temp;
		}
		void show_data(){
			cout<<"sum = "<<real<<" + "<<img<<"i "<<endl;
		}
};
int main(){
	complex a, b, c;
	a.set_data(2, 3);
	b.set_data(3, 4);
	a = c.mul(a, b);
	a.show_data();
}
