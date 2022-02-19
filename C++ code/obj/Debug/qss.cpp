#include<iostream>
using namespace std;

int main()
{
    int x;
    int areacube;

    int length;
    int length2;
    int length3;

    cout<<"enter firsst angle"<<endl;
    cin>>length;

    cout<<"enter second angle"<<endl;
    cin>>length2;


    length3=180-length-length2;
    cout<<"the third angle is :"<<length3<<endl;

    cout<<"enter the length of cube :"<<endl;
    cin>>x;
    cout<<"the length of the cube is:"<<x<<endl;
    

    areacube=x*x*x;
    cout<<"the area of cube is "<<areacube<<endl;



    return 0;


}