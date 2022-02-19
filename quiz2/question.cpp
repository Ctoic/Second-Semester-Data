#include <iostream>
using namespace std;
int main()
{
int num=23;
cout<<"value of a before changing: "<<num<<endl;
num=14;
int num1=44;
cout<<"value of b before changing: "<<num1<<endl;num1=25;
int num2=69;
cout<<"value of c before changing: "<<num2<<endl;
num2=26;
int *pntr;
pntr=&num;
int *pntr1;
pntr1=&num1;
int *pntr2;
pntr2=&num2;
cout<<"value of num after changing through pointer: "<<*pntr<<endl;
cout<<"value of num1 after changing through pointer: "<<*pntr1<<endl;
cout<<"value of num2 after changing through pointer: "<<*pntr2<<endl;
        return 0;
        
}