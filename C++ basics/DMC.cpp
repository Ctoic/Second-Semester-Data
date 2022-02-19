#include<iostream>

using namespace std;

int main()
{
    int obt_marks;
    int percentage;
    int total_mrks=90;


    cout<<"Enter your marks in OOP lab";
    cin>>obt_marks;


    percentage=(obt_marks*100)/total_mrks;


    cout<<obt_marks<<"  out of " <<total_mrks<<"  \n  your percentage is "<<percentage<<endl;

    return 0;

}