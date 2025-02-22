/* A simple example of the polymorphism is the person 
is the husband, father, employee at the same timeee
so, a perso can be same at different time is called polymorphism
*/
#include<iostream>
using namespace std;
class animal{
    public:
    void display(){
        cout<<"from base class animal"<<endl;
    }
};
class dog: public animal{
    void display(){
        cout<<"from derived class dog "<<endl;
    }
};
class cow: public animal{
    void display(){
        cout<<"from derived class cow"<<endl;
    }
};
int main(){
    animal *pa;//pointer always at the baase class 
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