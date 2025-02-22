//
#include<iostream>
using namespace std;
int main(){
	int n, setA[n], j;
	int uni[5] = {1, 2, 3, 4, 5};
	cout<<"**computer representation of set A in universal set of natural numbers**"<<endl;
	cout<<"Note: universal is the natural numbers upto 5"<<endl;
	cout<<"how many numbers should set A be: ";
	cin>>n;
	cout<<"enter the elements of set A: ";
	for(int i=0; i<n; i++){
		cout<<"enter "<<i<<": ";
		cin>>setA[i];
	}
	
	cout<<"set A : ";
	cout<<"{";
	for(int i=0; i<n; i++){
		cout<<setA[i]<<", ";
	}
	cout<<"}"<<endl;
	
	cout<<"universal set: ";
	cout<<"{";
	for(int i=0; i<sizeof(uni[5]); i++){
		cout<<uni[i]<<", ";
	}
	cout<<"}"<<endl;
	
	cout<<"{";
	for(int i=0; i<sizeof(uni[5]); i++){
		for(int j=0; j<n; j++){
			if(uni[i] != setA[j]){
				cout<<0;
			}else{
				cout<<1;
			}
		}
	}
	cout<<"}"<<endl;	
}
