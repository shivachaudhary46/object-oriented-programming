//pattern_12 
#include<iostream>
using namespace std;
int main() {
	int row = 1, n;
	cout<<"enter the n: ";
	cin>>n;
	while(row <= n) {
		int col = 1;
		while(col <= n) {
			char ch = 'A'+ row + col - 2;
			cout<<ch;
			col = col + 1;
		}
		cout<<endl;
		row = row + 1;3
	}
}
