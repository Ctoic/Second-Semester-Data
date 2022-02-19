#include<iostream>
using namespace std;

class Employee{
    private:
    int age;
    float slary;
    string name;

    public:
    int setage(int a){
    age=a;
    }
    int getage(){
    return age;
    }
    };


int main(){
    Employee E1;
    E1.setage(12);
    E1.getage();
    cout<<E1.getage()<<endl;



return 0;
}
