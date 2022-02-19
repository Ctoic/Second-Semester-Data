#include<iostream>

using namespace std;

int main()
{
    int celcius;
    int convert_to_ferenhite;

    cout<<"Enter tempreture in celcius"<<endl;
    cin>>celcius;

    convert_to_ferenhite=(celcius*9/5)+32;

    cout<<"tempreture in farenhite is:"<<convert_to_ferenhite<<endl;

    return 0;
    
}