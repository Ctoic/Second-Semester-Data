#include<iostream>

using namespace std;

int main()
{
    float points;
    char grades;

    cout<<"Enter your points:"<<endl;
    cin>>grades;

    if (grades=='A')
    {
        points=4.0;

    }
    else if(grades=='B'){
        points=3.0;
    }
    else if(grades=='C'){
        points=2.0;
    }
    else{
        cout<<"Fail no Gpa Ammigo anjoy"<<endl;

    }
    
    return 0;

}