#include <iostream>
using namespace std;
double convert(double* kilograms);

int main()
{
double kilograms;

cout<<"Enter kilograms: ";
cin>>kilograms;
cout<<kilograms<<" kilogram(s) = "<<convert(&kilograms)<<" gram(s).\n";
system("pause");
return 0;
}
double convert(double* kilograms){
return *kilograms*1000;
}
