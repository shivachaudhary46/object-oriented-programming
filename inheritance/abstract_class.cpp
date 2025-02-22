#include<iostream>
using namespace std;
/*those class which have pure virtual class is called 
abstract class */
class polygon{
    protected:
    int weight, height;
    public:
    void set_data(int weight, int height){
        this->weight=weight;
        this->height=height;
    }
    virtual int area()=0;
};
class rectangle: public polygon{
    public:
    int area(){
        return (weight*height);
    }
};
class triangle: public polygon{
    public:
    int area(){
        return (weight*height)/2;
    }
};
int main(){
    polygon *pa;
    triangle t;
    rectangle r;

    pa=&t;
    t.set_data(2, 3);
    cout<<"area of trangle "<<pa->area()<<endl;

    pa=&r;
    r.set_data(3, 4);
    cout<<"area of rectangle "<<pa->area()<<endl;
}