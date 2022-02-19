#include<iostream>

using namespace std;

int main()
{
    int tempreture;

    cout<<"Enter tempreture in celcius:"<<endl;
    cin>>tempreture;

    if(tempreture<0)
    cout<<" It is too cold outside  stay home "<<endl;

    else if(tempreture<10 && tempreture>0)
    cout<<"it is cold outside but you will love it"<<endl;

    else if(tempreture<20 && tempreture>10)
    cout<<"weather is mild nor hot not too cold enjoy this weather"<<endl;


    else
    cout<<" the weather is very hot todayy stay home"<<endl;


    return 0;


}