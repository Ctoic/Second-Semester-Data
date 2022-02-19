#include<iostream>

using namespace std;

class student
{
private:
    int admno;
    char stu_name;
    float eng,math,science;
    
    float total;
    float ctotal(){
        total=eng+science+math;
        return total;
    }
public:
    student(/* args */);
    ~student();
};

student::student(/* args */)
{
}

student::~student()
{
}
