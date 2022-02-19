#include <iostream>
using namespace std;
int main()
{
int arr[]={2,23,21,25,34,31,22,20};
int *ptr;
ptr=arr;
cout<<"values of the array through indexes "<<endl;
for (int i=0; i<8; i++){
cout<<arr[i]<<" ";
}cout<<endl;
cout<<"values of the array through at addresses "<<endl;
for (int i=0; i<8; i++){
cout<<*(arr+i)<<" ";
}
cout<<endl;
cout<<"values of the array through at pointers "<<endl;
for (int i=0; i<8; i++){
cout<<*(ptr+i)<<" ";
}
return 0;
}