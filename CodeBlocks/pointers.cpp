#include<iostream>
using namespace std;

int main(){
    double num;
    int x=87;
    int* ptr= &x;//refrencing
    *ptr=875;

    string y;

    cout<<"===========Display============"<<endl;
    // a pointer is memory address as value

    cout<<"the value of x after changing in pointer:"<<x<<endl;/*hence when value of pointer is change
                                                               automatically value of variable change*/

    cout<<"using pointer we store amemory "<<&num<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;//derefrencing


    cout<<&y<<endl;

    return 0;


}
