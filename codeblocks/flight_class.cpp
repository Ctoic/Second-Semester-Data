#include<iostream>
#include<string>

using namespace std;

class Flight{
    int flight_num;
    string destination;
    float distance;
    float fuel;
    void calfule(){
    if (distance<=1000){
    fuel=500;
    }
    else if(distance>=1000 & distance<=2000){
    fuel=1100;}
    else if(distance>2000){
    fuel=2200;}

    }
    public:
    void info_feed(){
    cout<<"Enter Flight number, Destination and Distance:"<<endl;
    cin>>flight_num>>destination>>distance;
            calfule();
            }
    void show_info(){
    cout<<"Flight Number is :"<<flight_num<<endl;
    cout<<"Destinatin is :"<<destination<<endl;
    cout<<"Distance is :"<<distance<<endl;
    cout<<"Fuel needed is :"<<fuel<<endl;
    }

    };

    int main(){
    Flight F16;
    F16.info_feed();
    F16.show_info();

    }
