#include<iostream>
using namespace std;
class rectangle{
	private:
		float l, b;
	public:
		void get_lb(float len, float bre){
			l = len;
			b = bre;
		}
		void show();
	private:
		void area(){
			int area;
			area = l * b;
			cout<<"area of rectangle: "<<l<<" and "<<b<<" is "<<area<<endl;
		}
		void perimeter(){
			int per;
			per = 2 * (l+b);
			cout<<"perimeter of rectangle: "<<l<<" and "<<b<<" is "<<per<<endl;
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
