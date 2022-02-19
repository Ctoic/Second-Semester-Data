#include<iostream>
using namespace std;

int main()
{
    int num1;
    int num2;
    int sum;

    cout<<"Enter two numbers :"<<endl;
    cin>>num2;
    cin>>num1;

    if (num1==num2)
    {
        sum=4*(num1+num2);
        cout<<"The saame number sum multiply by 4:::>>"<<sum<<endl;
    }else{
        sum=num1+num2;
        cout<<sum<<endl;
    }
    

    return 0;
}