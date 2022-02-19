#include<iostream>

using namespace std;
class Student
{
private:
    /* data */
    char name[10];
    int age;


public:

    void input(){
        cout<<"Enter Name:"<<endl;
        cin>>name;

        cout<<"enter age"<<endl;

    cin>>age;

    }
    void show()
    {
        cout<<"name is ;"<<name<<endl;
        cout<<"your age is :"<<age<<endl;

    }
};

int main(){
    Student s,*p;
    p=&s;
    p->input();
    p->show();
    return 0;
}
