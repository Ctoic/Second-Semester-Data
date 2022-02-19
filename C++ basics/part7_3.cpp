#include<iostream>

using namespace std;

int main()
{
    int i=1,num;
    cout<<"Enter a number :";
    cin>>num;

    do
    {
        cout<<i*num<<endl;
        i++;

    } while (i<=num);

    return 0;

    
}