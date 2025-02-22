#include<iostream>
using namespace std;
class first{
	private:
		int roll;
		string name;
		float fee;
	public:
		void get(int r, string n, float f);
		

		void set();
	public:
		void show_default();
	};
	
void first::get(int r, string n, float f){
			roll = r;
			name = n;
			fee = f;
		}
void first::set(){
	cout<<"name: "<<name<<" roll: "<<roll<<" fee: "<<fee<<endl;
}
void first::show_default(){
	set();
}
int main(){
	first f;
	f.get(34, "shiva", 34.55);
	f.set();
	f.show_default();
}
