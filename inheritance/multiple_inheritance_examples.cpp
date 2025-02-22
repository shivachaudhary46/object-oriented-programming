#include<iostream>
using namespace std;
class A{
    public:
    int a = 23;
    A(int a){
        this->a = a;
    }
}; 
class B{
    public:
    int b = 45;
    B(int b){
        this->b=b;
    }
};
class C: public A, public B{
    int c;
    public:
    C(int a, int b, int c):A(a), B(b){
        this->c=c;
    }
    void show(){
        cout<<"a, b, c: "<<a<<" "<<b<<" "<<c<<endl;
    }
};
int main(){
    C  derived(1, 2, 3);
    derived.show();
}