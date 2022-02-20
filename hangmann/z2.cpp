#include <iostream>
using namespace std;
int main()
{
 int a=23;
 cout<<"value of a before changing: "<<a<<endl;
 a=34;
 int b=69;
 cout<<"value of b before changing: "<<b<<endl;
 b=96;
 int c=76;
 cout<<"value of c before changing: "<<c<<endl;
 c=74;
 int *pntr;
 pntr=&a;
 int *pntr1;
 pntrb=&b;
 int *pntrc;
 pntrc=&c;
 cout<<"value of a after changing through pointer: "<<*pntr<<endl;
 cout<<"value of b after changing through pointer: "<<*pntr1<<endl;
 cout<<"value of c after changing through pointer: "<<*pntr2<<endl;
    return 0;
}