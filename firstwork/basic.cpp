#include<iostream>

using namespace std;

int main(){

    int num1,num2,num3,num4;
    int total;
    float Average;

    cout<<"enter four number for the total and average"<<endl;


    cin>>num1;
    cin>>num2;
    cin>>num3;
    cin>>num4;


    total=num1+num2+num3+num4;
    cout<<"the sum is :"<<total<<endl;


    Average=total/2;
    cout<<"average is :"<<Average<<endl;

    return 0;

}