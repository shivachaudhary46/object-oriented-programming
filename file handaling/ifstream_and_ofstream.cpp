#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char name[100];
    cout<<"enter the name and age: ";
    cin.getline(name, 100);
    ofstream myFile("abc.txt");
    myFile<<name;
    myFile.close();
    cout<<"file write operation perform succesfully ";

    //file name operation 
    cout<<"for read operation: "<<endl;
    ifstream obj("xyz.txt");
    obj.getline(name, 100);
    cout<<"array content: "<<name<<endl;
    obj.close();





}



