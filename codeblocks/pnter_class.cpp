#include<iostream>

using namespace std;

class  BB
{
    public:
    void ppp()
    {
        cout<<"it is the first derived class:"<<endl;
    }

};
class d2: public BB
{
    void ppp(){
    cout<<"Its is the seecond dervied class"<<endl;
    }
};
int main(){
    BB *p;
    d1 a;
    d2 b;
    p=&a;
    p-> ppp();

    p=&b;
    p->ppp();
    return 0;

}
