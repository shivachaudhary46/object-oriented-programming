#include<iostream>
using namespace std;
class A{
    public:
    ~A(){
        cout<<"destructor of the base class is called "<<endl;
    }
};
class B: public A{
    public:
    ~B(){
        cout<<"destructor of the first derived class  is called "<<endl;
    }
};
class C: public B{
    public:
    ~C(){
        cout<<"destructor of the last derived class is called "<<endl;
    }
};
int main(){
    C x;//destructor is called 
}