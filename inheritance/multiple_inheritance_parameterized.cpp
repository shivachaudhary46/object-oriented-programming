//multiple inheritances paremeterized constructor with public mode 
#include<iostream>
using namespace std;
//base class 1
class mother {
		int x;
	public:
		int y;
	protected:
		int z;
		
	public:
		mother(int x, int y, int z) {
			this->x = x;
			this->y = y;
			this->z = z;
		}
		void show_mother() {
			cout<<"the value of x and y and z: "<<x<<" | "<<y<<" | "<<z<<endl;
		}
};
//base class 2
class father {
		//private members 
			int a;
		protected:
			int b;
		public:
			int c;
			father(int a, int b, int c) {
				this->a = a;
				this->b = b;
				this->c = c;
			} 
			void show_father() {
				cout<<"a, b, c: "<<a<<"||"<<b<<"||"<<c<<endl;
			}	
};

//children class
class son: public mother, private father {
	//private for the son class 
	int d;
	public:
	//c protected->father, b public->father, y public -> mother, z protected -> mother   
	son(int d,int a, int b, int c, int x, int y, int z):mother(x, y, z):father(a, b, c) {
		this->d = d;
	}
	void show_data() {
		show_father();
		show_mother();
	}
};
int main() {
	son s1(1, 2, 3, 4, 5, 6, 7);
	s1.show_data();
}
