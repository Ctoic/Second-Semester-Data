#include<iostream>
using namespace std;

struct Person{
    char name[50];
    int age;
    float salary;


};
void display_data(Person);

int main(){
    Person najam;

    cout<<"Enter your full name"<<endl;
    cin>>najam.name;

    cout<<"Enter your age"<<endl;
    cin>>najam.age;

    cout<<"enter your salary"<<endl;
    cin>>najam.salary;
    display_data(najam);



}

void display_data(Person najam){
    cout<<"==============DISPLAY INFO=================="<<endl;
    cout<<"name:"<<najam.name<<endl;
    cout<<"name:"<<najam.age<<endl;
    cout<<"name:"<<najam.salary<<endl;




}

