#include <iostream>
using namespace std;

class person{
private:
    string name;
    int idcard;
    int cellphone;

public:
  virtual  void print()=0;

  void getters1(){
  cout<<"enter the name "<<endl;
  cin>>name;
  cout<<"enter the idcard "<<endl;
  cin>>idcard;
  cout<<"enter the cellphone "<<endl;
  cin>>cellphone;
  }
 void setters1 (){
 cout<<"name is "<<name<<endl;
 cout<<"idcard is "<<idcard<<endl;
 cout<<"cellphone is  "<<cellphone<<endl;
 }


};

class teacher : virtual public person {
string dptname;
int empid;

public:

void print(){
    cout<<"print function of teacher class"<<endl;}

void getters2(){
  cout<<"enter the department name "<<endl;
  cin>>dptname;
  cout<<"enter the empid "<<endl;
  cin>>empid;

  }
  void setters2 (){
 cout<<"department name is "<<dptname<<endl;
 cout<<"employee id is "<<empid<<endl;

 }

};

class student: virtual public person {
private:
        int rollno;
        int semfee;
public:

void print(){
    cout<<"print function of student class"<<endl;}

void getters3(){
  cout<<"enter the roll nmbr "<<endl;
  cin>>rollno;
  cout<<"enter the semester fee  "<<endl;
  cin>>semfee;}

  void setters3 (){
 cout<<"roll is "<<rollno<<endl;
 cout<<"semester fee is "<<semfee<<endl;

 }

};

class publication: public teacher, public student{
private:
    int noOfPublication;

public:

void print(){
    cout<<"print function of pub class"<<endl;}

void getters4(){
  cout<<"enter the no of publications "<<endl;
  cin>>noOfPublication;
  }

void setters4 (){
 cout<<"no of publication are  "<<noOfPublication<<endl;

 }

};

int main()
{ publication p1;
    p1.getters1();
    p1.getters2();
    p1.getters3();
    p1.setters1();
    p1.setters2();
    p1.setters3();
