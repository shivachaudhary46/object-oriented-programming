#include<iostream>
using namespace std;
int main() {
	int row, n;
	cout<<"enter the number : ";
	cin>>n;
	while(row <= n) {
		int col = 1;
		while(col <= n) {
			char ch = 'A'+ col  -1;
			cout<<ch;
			col = col + 1;
		}
		row = row + 1;
		cout<<endl; 
	}
}
