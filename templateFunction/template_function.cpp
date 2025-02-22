#include<iostream>
using namespace std;
template<class T, class U>
T Fmax(T a, U b){
    T max;
    if(a>b){
        max=a;
    }else{
        max=b;
    }
    return max;
}
int main(){
    int a=2, x;
    float b=3.5, y;
    // x=Fmax(a, b);
    cout<<"maximum: "<<Fmax(b, a)<<endl;
    int c=3;
    float d=4.5;
    y=Fmax(d, c);
    cout<<"maximum: "<<y<<endl;
}