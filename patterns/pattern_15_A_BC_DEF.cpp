//pattern_13_A_BB_CCC
#include<iostream>
using namespace std;
int main() {
	int row = 1, n;
	cout<<"enter the number : ";
	cin>>n;
	char value = 'A';
	while(row <= n){
		int col = 1;
		while(col <= row){
			cout<<value;
			value = value + 1;
			col = col + 1;
		}
		cout<<endl;
		row = row + 1;
	}
}
