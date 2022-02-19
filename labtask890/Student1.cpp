#include <iostream>
#include <string>
#include <iomanip>
 
using namespace std;
 
class Student
{
public:
               // Default constructor
  Student() {
      s1 = 0;
      s2 = 0;
      s3 = 0;
  } 
	// Parameterized constructor
  Student(int no, string name, float math, float eng, float sci) {
      regono = no;
      sname = name;
      s1 = math;
      s2 = eng;
      s3 = sci; 
  } 
	// Member functions
  float calculate(){
      total = s1 + s2 + s3;
       return total;
  }
  void putData();
	// destructor. 
  ~Student() {};
 
private:
               int regono;
               string sname;
               float s1;
               float s2;
               float s3;
               float total;
};
 
void Student::putData() {
  cout << "Student number: " << regono << endl;
  cout << "Student name:  " << sname << endl<<endl;
  cout << "s1 mathe:    " <<setw(6)<< fixed << setprecision(2) << s1 << endl;
  cout << "s2 English:  " <<setw(6)<< fixed << setprecision(2) <<s2 << endl;
  cout << "s3 Science: " <<setw(6)<< fixed << setprecision(2) <<s3 << endl;
  cout << "total:       " <<setw(6)<< fixed << setprecision(2) <<calculate() << endl;
  cout << "==++==++==++==++==++==++==++=="<<endl;
}
 
int main() {
  Student st1(123, "Najam Ali Abass", 93, 90, 94.95); //Parameterized constructor
  st1.putData();
  return 0;
}