#include<iostream>
#include <cmath>
using namespace std;
int convert(int num);
int main()
{
int num;
cout<<"Decimal nuumber is here : "<<convert(1101010);
return 0;
}
int convert(int num)
{
int decimalNumber = 0, i = 0, remainder;
while (num!=0)
{
remainder = num%10;
num/= 10;
decimalNumber += remainder*pow(2,i);
++i;
}
return decimalNumber;
}