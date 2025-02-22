#include<iostream>
using namespace std;
class first{
	private:
		int roll;
		string name;
		float fee;
	public:
		void get(int r, string n, float f);
	};
	
void first::get(int r, string n, float f){
			roll = r;
			name = n;
			fee = f;
			cout<<"name: "<<name<<" roll: "<<roll<<" fee: "<<fee<<endl;
		}
int main(){
	first f;
	f.get(34, "shiva", 34.55);
}
