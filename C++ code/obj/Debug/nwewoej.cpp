
#include <iostream>
using namespace std;

void ppp(char *);  // Function Prototype

int main () {

char st[] = "Pakistan";

ppp(st);   // calling function

cout<<"OK";
}


//function definition
void ppp(char *sss)
{
 //loop iterating string using pointer
    while (*sss != '\0')
    {
        cout<<*sss<<endl;
        *sss++;
    }
}