#include<iostream>
using namespace std;
class animal{
    public:
    virtual void display(){
        cout<<"from bases class animal"<<endl;
    }
};
class cow: public animal{
    void display(){
        cout<<"from derived class cow"<<endl;
    }
};
class dog: public animal{
    void display(){
        cout<<"from derived class dog"<<endl;
    }
};
int main(){
    animal *pa;
    animal a;

    cow c;
    dog d;
    pa=&a;
    pa->display();

    pa=&c;
    pa->display();

    pa=&d;
    pa->display();
}