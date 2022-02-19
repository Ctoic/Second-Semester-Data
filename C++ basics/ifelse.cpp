#include<iostream>

using namespace std;

int main()
{
    int integer;

    cout<<"Enter any Integer: "<<endl;
    cin>>integer;

    if(integer<0)
    cout<<integer<< "  is a negetive integer"<<endl;
    else
    cout<<integer<<" is a postive integer"<<endl;

    return 0;

}