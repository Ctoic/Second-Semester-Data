#include<iostream>
#include<string>

using namespace std;


class Time{
    int Hrs,Mins;
    public:
    void set_time(int h,int m){
    Hrs=h;
    Mins=m;
    }
    void shw_time(){
    cout<<"Time in hours is : "<<Hrs<<"\n Time in minutes is: "<<Mins<<endl;
    }
    Time sum(Time T2){
    Time T3;
    T3.Mins=Mins+T2.Hrs;
    return T3;
    }




};

int main(){
    Time T1,T2,T3;
    T1.set_time(2,54);
    T1.shw_time();
    T2.set_time(8,43);
    T2.shw_time();
    T3=T1.sum(T2);
    T3.shw_time();
    }




