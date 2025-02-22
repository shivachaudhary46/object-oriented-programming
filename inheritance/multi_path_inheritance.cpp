#include<iostream>
#include<string>
using namespace std;
class person{ 
    protected:
    int pid;
    string pname;
    public:
    void getData(){
        cout<<"enter the pid and person name: ";
        cin>>pid>>pname;
    }
    void display(){
        cout<<"pid: "<<pid<<" ";
        cout<<"name: "<<pname<<endl;
    }
};
class employee: virtual public person{
    protected: 
    int eid;
    string ename;
    public:
    void getData(){
        cout<<"enter the eid and employee name: ";
        cin>>eid>>pname;
    }
    void display(){
        cout<<"eid: "<<eid<<" ";
        cout<<"name: "<<ename<<endl;
    }
};
class student: virtual public person{
    protected:
    int sid; 
    string sname;
    public:
    void getData(){
        cout<<"enter the sid and student name: ";
        cin>>sid>>sname;
    }
    void display(){
        cout<<"sid: "<<sid<<" ";
        cout<<"sname: "<<sname<<endl;
    }
};
class manager: public employee, public student{
    string mname;
    public:
        void getData(){
            person::getData();
            employee::getData();
            student::getData();
            cout<<"enter the manager name: ";
            cin>>mname;
        }
        void display(){
            person::display();
            employee::display();
            student::display();
            cout<<"manager name: "<<mname<<endl;
        }
};
int main(){
    manager m;
    m.getData();
    m.display();
}