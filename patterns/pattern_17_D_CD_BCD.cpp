//pattern_16
#include<iostream>
using namespace std;
int main() {
	int row = 1, n;
	cout<<"enter the number : ";
	cin>>n;
	
	while(row <= n){
		int col = 1;
		char ch = 'A'+n-row;
		while(col <= row){
			cout<<ch;
			ch = ch + 1;
			col = col + 1;
		}
		cout<<endl;
		row = row + 1;
	}
}
