#include<iostream>
using namespace std;
class based{
    protected:
    int a;
    public:
    based(int a){
        this->a=a;
    }
    void show(){
        cout<<"constructor data - "<<a<<endl;
    }
};
class derived: public based{
    protected:
    int b;
    public:
    derived(int a, int b):based(a){
        this->b=b;
    }
    void show(){
        cout<<"a - "<<a<<endl;
        cout<<"b - "<<b<<endl;
    }
};
int main(){
    derived d(4, 5);
    d.show();
}