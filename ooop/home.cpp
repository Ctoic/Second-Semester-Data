#include<iostream>
#include<string.h>

using namespace std;
int difference(int num1, int num2)
{
return abs(num2-num1);
}

int main()
{
cout<<" Non negetive difference is :"<<difference(6,3);
}