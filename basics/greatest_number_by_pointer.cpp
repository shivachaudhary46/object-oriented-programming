//wap to find the largest number by return by pointer as parameter
#include<iostream>
using namespace std;
int max_arr(int *p, int n){
	for(int i=0; i<n; i++){
		if(*(p) < *(p+i)){
			*p = *(p+i);
		}
	}
	return *p;
}
int main(){
	int n, arr[n], res;
	cout<<"enter the number of the array: ";
	cin>>n;
	for(int i=0; i<n; i++){
		cout<<"enter: ";
		cin>>*(arr+i);
	}
	res = max_arr(arr, n);
	cout<<"the largest number of array: "<<res<<endl;
}
