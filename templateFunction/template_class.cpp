#include<iostream>
using namespace std;
template<class T>
class showMax{
    protected:
    T a, b;
    public:
    showMax(T first, T second){
        a=first;
        b=second;
    }
    T Fmax(){
        T ret;
        ret = (a>b)?a:b;
        return ret;
    }
};
int main(){
    showMax <int>s(100, 20);
    cout<<"larger="<<s.Fmax()<<endl;
    showMax  <double>s1(90.90, 45.5);
    cout<<"larger="<<s1.Fmax()<<endl;
}