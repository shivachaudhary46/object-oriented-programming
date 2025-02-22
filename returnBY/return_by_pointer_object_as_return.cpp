
#include<iostream>
using namespace std;
class complex{
		int real, img;
	public:
		void set_data(int r, int i){
			real = r;
			img = i;
		}
		complex calculate(complex *a, complex *b){
			complex temp;
			temp.real = a->real + b->real;
			temp.img = a->img + b->img;
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
	a = c.calculate(&a, &b);
	a.show_data();
}
