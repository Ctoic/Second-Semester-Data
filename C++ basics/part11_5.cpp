#include<iostream>

using namespace std;

int print_type(int n){

    cout<<endl;
    cout<<n<<"  has datatype integer";

    return 0;

}
double print_type(double l){
    cout<<endl;
    cout<<l<<"  has a datatype Double";

    return 0;
}

bool print_type(bool x){
    cout<<endl;
    cout<<x<<" has datype of BOOL";

    return 0;
}

char print_type(char s ){
    cout<<endl;
    cout<<s<<" has a dataype Char";
    return 0;
}

int main(){
    print_type('S');
    print_type(false);
    print_type(1.12121212);
    print_type(12323);

    cout<<endl;
    return 0;
}
