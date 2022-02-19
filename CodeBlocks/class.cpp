#include<iostream>
#include<string>
using namespace std;

class Car{
    public:

    string color;
    float cost;
    int year_release;
    };

int main(){
    Car valvo;
    valvo.color="blue";
    valvo.cost=2831081.90;
    valvo.year_release=2020;

    Car BMW;
    BMW.color="RED";
    BMW.cost=2831999.0;
    BMW.year_release=2021;



    cout<<"=========Display==========="<<endl;
    cout<<"colour of valvo :"<<valvo.color<<"  "<<"COst IS ;"<<valvo.cost<<"year:"<<valvo.year_release<<endl;
    cout<<"Color is :"<<BMW.color<<"Cost:"<<BMW.cost<<"Year released:"<<BMW.year_release<<endl;

    return 0;


    }
