#include<iostream>
using namespace std;
class Info{
	private:
		int item_id;
		float cost;
		string name;
	public:
		void set_data(int item, float mon, string per_name){
			item_id = item;
			cost = mon;
			name = per_name;
		}
		void show_data(){
			cout<<"name : "<<name<<" | "<<" cost: "<<cost<<" | "<<""" item id: "<<item_id;
		}
};
int main(){
	Info i;
	int item;
	float mon;
	string name;
	cout<<"enter the item id, cost, and name : ";
	cin>>item>>mon>>name;
	i.set_data(item, mon, name);
	i.show_data();
}
