//example of single inheritances using parameterized constructor public mode  
#include<iostream>
#include<string>
using namespace std;
//parent class 
class parent{
	string name;
	int age;
	float salary;
	
	public:
		parent(string name, int age, float salary){
			this->name = name;
			this->age = age;
			this->salary = salary;
		}
		
		void display_parent(){
			cout<<"parent method "<<endl;
			cout<<"name: "<<name<<" | "<<"age: "<<age<<" | "<<"salary: "<<salary<<" | "<<endl;
		}
};

//children class 
class children : public parent {
	string gender;
	public:
		//no need to define the name, int, float cause called parent class 
		children(string name, string gender, int age, float salary):parent(name, age, salary) {
			this->gender = gender;
		}
		void display_children(){
			cout<<"children method"<<endl;
			display_parent();
			cout<<"gender: "<<gender<<endl;
		}
};
int main() {
	cout<<"enter the name: ";
	int age;
	float salary;
	string name, gender;
	getline(cin, name);
	cout<<"enter the gender: ";
	getline(cin, gender);
	cout<<"enter the age and salary: ";
	cin>>age>>salary;
	children child(gender, name, age, salary);
	child.display_parent();
	child.display_children();
}
