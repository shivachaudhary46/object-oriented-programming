#include<iostream>
using namespace std;
int main(){
    int nume, denume;
    double output;

    cout<<"enter the numerator and denumerator: ";
    cin>>nume>>denume;

    try{
        if(denume==0){
            throw denume;
        }else{
            output=nume/denume;
        }
        cout<<"the output: "<<output<<endl;
    }catch(int d){
            cout<<"your denumerator cannot be zero: "<<d<<endl;
    }
}