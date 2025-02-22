//wap to find the largest number by return by sized array as parameter
#include<iostream>
using namespace std;
int max_arr(int arr[], int n){
	for(int i=0; i<n; i++){
		if(arr[0]<arr[i]){
			arr[0] = arr[i];
		}
	}
	return arr[0];
}
int main(){
	int arr[5], res, n;
	cout<<"enter the number of the array: ";
	cin>>n;
	for(int i=0; i<n; i++){
		cout<<"enter: ";
		cin>>arr[i];
	}
	res = max_arr(arr, n);
	cout<<"the largest number of array: "<<res<<endl;
}
