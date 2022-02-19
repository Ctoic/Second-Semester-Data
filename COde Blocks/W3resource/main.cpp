#include <iostream>

using namespace std;

int main()
{
    int sum,num1,num2;

    cout<<"enter two number"<<endl;
    cin>>num1;
    cin>>num2;

    if(num1==num2){
    sum=(num1+num2)*3;

    cout<<"sum when two same numbers : "<<sum<<endl;
    }
    else{
    sum=num1+num2;
    cout<<"Sum of two numbers is:"<<sum<<endl;
    }
    return 0;
}
