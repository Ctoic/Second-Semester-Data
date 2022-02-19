#include<iostream>
using namespace std;
class Employee{
    private:
    string empName;
    int empNumber;
    public:
    void getData(){
        cout<<" Enter Employee Name : "<<endl;
        cin>>empName;
        cout<<"Enter Employee Number : "<<endl;
        cin>>empNumber;
    }
    void putData(){
        cout<<"Employee Name "<<empName<<endl;
        cout<<"Employee Number "<<empNumber<<endl;
    }

};
class Manager:public Employee{
    private:
    char title[10];
    double club_dues;
    public:
    void getData(){
        Employee::getData();
        cout<<"Enter Title :  "<<endl;
        cin>>title;
        cout<<"Enter Club Dues "<<endl;
        cin>>club_dues;
    }
    void putData(){
        Employee::putData();
        cout<<"Title "<<title<<endl;
        cout<<"Club Dues "<<club_dues<<endl;

    }
};
class Scientist:public Employee{
    private:
    int publications;
    public:
    void getData(){
        Employee::getData();
        cout<<"Enter No.Of Publications :  "<<endl;
        cin>>publications;
    }
    void putData(){
        Employee::putData();
        cout<<"Publications : "<<publications<<endl;
    }
};
class Programmer:public Employee{
    private:
    double salary;
    string expertise;
    public:
    void getData(){
        Employee::getData();
        cout<<"Enter Salary :  "<<endl;
        cin>>salary;
        cout<<"Enter Expertise :  "<<endl;
        cin>>expertise;


    }
    void putData(){
        Employee::putData();
        cout<<"Salary  : "<<salary<<endl;
        cout<<"Expertise : "<<expertise;
    }
};
int main(){
    Employee Em_p1;
    Manager Ma_1;
    Scientist St_1;
    Programmer P_1;
    Em_p1.getData();
    Em_p1.putData();
    Ma_1.getData();
    Ma_1.putData();
    St_1.getData();
    S1_1.putData();
    P_1.getData();
    P_1.putData();
}
