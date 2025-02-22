//wap to convert meters into centimeter(userdefined to userdefined)(use method in destination)
//destination = source 
#include<iostream>
using namespace std;
//class source
class meters{
	int m;
	public:
		meters(int m) {
			this->m = m;
		}
		int get_m(){
			return m;
		}
};

//class destination 
class centimetres{
	int cm, m;
	public:
		int get_cm() {
			return cm;
		}
		centimetres(meters a) {
			//get_m() will return the value of the m 
			m = a.get_m();
			cm = m * 100;
		}
		void show() {
			cout<<"the meters "<<m<<"m has been converted to cm : "<<cm<<"cm"<<endl;
		}
};
int main() {
	int value;
	cout<<"enter the value to convert meter to centimeter ";
	cin>>value; 
	meters g(value);
	centimetres c = g;
	c.show();
}
