#include<iostream>

using namespace std;

 enum days_week{sun,mon,tue,wed,thur,fri,sat};
int main()
{
   
    days_week day1,day2;

    day1=sun;
    day2=mon;

    int diff=day1-day2;

    cout<<"Days between "<<diff<<endl;
    if (day1<day2)
    {
        cout<<"day1 comes before day \n"<<endl;
    }

    return 0;
}