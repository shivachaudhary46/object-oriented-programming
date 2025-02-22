#include<iostream>
using namespace std;
int main(){
    int age=14;
    try{
        if(age>24){
            cout<<"you are allowed to drink alcohol";
        }else{
            throw(age);
        }
    }catch(int age){
        cout<<"you are not allowed to drink the alcohol"
            <<"because your aage is less than 24"<<endl;
        cout<<"your age is: "<<age<<endl;
    }
}