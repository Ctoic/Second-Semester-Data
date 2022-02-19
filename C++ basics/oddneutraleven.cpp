#include<iostream>

using namespace std;

int main()
{
    int integer;

    cout<<"Enter an integerr :"<<endl;
    cin>>integer;

    if(integer==0)
    cout<<integer<<" is a neutral integerr"<<endl;

    else if(integer>0)
    cout<<integer<<" is an postive integer"<<endl;

    else
    cout<<integer<<"  is a negetive integer"<<endl;
    

    return 0;
}
