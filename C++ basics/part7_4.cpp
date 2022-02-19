#include<iostream>


using namespace std;

int main()
{
int i=1,no,fact=1;
cout<<"enter a number";
cin>>no;
do
{
fact=fact*i;
i++;
}while(i<=no);
cout<<"factorial of number is "<< fact;

 return 0;
}