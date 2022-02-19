#include<iostream>
using namespace std;
int main()
{
 //Right Triangle pattern using asterisk in reverse order
 int square;
 cout<<"Enter The Size of Trianle = "; // size
 cin>>square;
 for(int i = square;i>=1;i--) // outer loop
 {
  for(int j=1;j<=i;j++) //inner loop
  {
   cout<<"* "; // value that is output
  }
  cout<<endl;//new line for next line output
 }
 return 0;

}
