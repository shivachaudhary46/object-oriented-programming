#include<iostream>
using namespace std;

int max_arr(int *p, int n) {
    int max_val = *p;  
    for(int i = 1; i < n; i++) {  
        if(max_val < *(p+i)) {
            max_val = *(p+i);
        }
    }
    return max_val;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    int arr[n];  
    for(int i = 0; i < n; i++) {
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }
    
    int res = max_arr(arr, n);
    cout << "The largest number in the array is: " << res << endl;
    return 0;
}
