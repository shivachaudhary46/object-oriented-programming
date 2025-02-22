#include<iostream>
using namespace std;
class base{
    public:
    int a=23;
    void show(){
        cout<<"a value: "<<a<<endl;
    }
};
class subbase: public base{
    public:
    int a = 24;
    void show(){
        cout<<"a derived class value: "<<a<<endl;
    }
};
int main(){
    subbase derived;
    derived.base::show();
    derived.show();
}
