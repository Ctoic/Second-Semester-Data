#include<iostream>

using namespace std;

int main()
{
    char oprator;
    int num1 ,num2;

    cout<<"Enter first number"<<endl;
    cin>>num1;

    cout<<" Enter second number"<<endl;
    cin>>num2;

    cout<<"Enter the operator for your operation"<<endl;
    cin>>oprator;

    if(oprator=='+')
    cout<<" Sum of two number is = "<<num1+num2<<endl;

    else if(oprator=='-')
    cout<<"The difference btween 2 numbers is= "<<num1-num2<<endl;

    else if(oprator=='*')
    cout<<"The product of given nums is = "<<num1*num2<<endl;

    else if(oprator=='/')
    cout<<"The quotient of given numbers is =  "<<num1/num2<<endl;

    else
    cout<<"The remainder of given numbers is = "<<num1%num2<<endl;





    return 0;
}