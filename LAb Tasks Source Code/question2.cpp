#include<iostream>
using namespace std;
 
int main()
{
    int a, b;
    void swap(int*, int*);
    cout<<"Enter 1st value :";
    cin>>a;
    cout<<"Enter 2nd value :";
    cin>>b;
    swap(&a, &b);
    cout<<"Value after swapping"<<endl;
    cout<<"1st value ="<<a<<endl;
    cout<<"2nd value ="<<b<<endl;
 
    return 0;
}
 
void swap(int *x, int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}