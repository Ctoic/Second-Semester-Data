#include<iostream>
#include<string>

using namespace std;

class Report{
    int admsn_num;
    char name[20];
    float marks[5];
    int average=0;
    void get_average(){
    int total =0;
    for(int i=0;i<5;i++){
    total+=marks[i];
    }
    average=total/5;

    }
    public:
    void read_info(){
    cout<<"Enter your name and admission number:"<<endl;
    cin>>admsn_num>>name;

    cout<<"Enter five subjects marks :"<<endl;
    for(int i=0;i<5;i++){
    cin>>marks[i];

    }
    get_average();
    }
    void dsip_info(){
    cout<<"Admission Number is:"<<admsn_num<<endl;
    cout<<"Name is:"<<name<<endl;
    cout<<"Your marks are:"<<endl;
    for(int i=0;i<5;i++){
    cout<<marks[i]<<" "<<endl;
    }
    cout<<"Your Average is :"<<average<<endl;


    }


    };

    int main(){
        Report Repo1;
        Repo1.read_info();
        Repo1.dsip_info();
        }
