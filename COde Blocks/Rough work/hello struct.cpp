#include<iostream>
using namespace std;

struct Person{
    int num1,num2;

    };
    int average(int num1,int num2){
    return (num1+num2)/2;
    }

int main(){
    Person p1;
    average(2,4);

    cout<<"Average is :"<<average<<endl;


    return 0;
    }
