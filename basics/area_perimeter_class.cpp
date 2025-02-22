#include<iostream>
using namespace std;
class rectangle{
	private:
		float a, b;
	public:
		void get_lb(float len, float bre){
			a = len;
			b = bre;
		}
		void show();
	private:
		void area(){
			int area;
			area = a * b;
			cout<<"area of rectangle: "<<a<<" and "<<b<<" is "<<area<<endl;
		}
		void perimeter(){
			int per;
			per = 2 * (a+b);
			cout<<"perimeter of rectangle: "<<a<<" and "<<b<<" is "<<per<<endl;
		}
};
void rectangle::show(){
	area();
	perimeter();
}
int main(){
	rectangle r;
	float l, b;
	cout<<"enter the two float values: ";
	cin>>l>>b;
	r.get_lb(l, b);
	r.show();
}
