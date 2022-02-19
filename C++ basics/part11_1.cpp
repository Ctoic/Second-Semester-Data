#include <iostream>
using namespace std;

void myFunction() {

  int input,endpoint;
  cout<<"please enter a number: ";
  cin>>input;

  cout<<"enter the endpoint:";
  cin>>endpoint;
  


    for (int  i = 1; i < endpoint; i++)
    {
       cout<<i*input<<endl;

    }
    
  
}

int main() {
  myFunction();
  return 0;
}
