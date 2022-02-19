#include<iostream>
using namespace std;
class Rectangle2;
class Rectangle3;
class Rectangle4;
class Rectangle1{
    private:
    int length,breadth;
    public:
    Rectangle1(int l,int b){
        length=l;
        breadth=b;
    }
    void Show(){
        cout<<"Recctangle 1 : "<<"   "<<"Length "<<length<<"  "<<"Breadth"<<breadth<<endl;
    }
    friend void sum(Rectangle1,Rectangle2,Rectangle3,Rectangle4);
};
class Rectangle2{
    private:
    int length,breadth;
    public:
    Rectangle2(int l,int b){
        length=l;
        breadth=b;
    }
    void Show(){
        cout<<"Recctangle 2 : "<<"   "<<"Length "<<length<<"  "<<"Breadth"<<breadth<<endl;
    }
    friend void sum(Rectangle1,Rectangle2,Rectangle3,Rectangle4);
};
class Rectangle3{
    private:
    int length,breadth;
    public:
    Rectangle3(int l,int b){
        length=l;
        breadth=b;
    }
    void Show(){
        cout<<"Recctangle 3 : "<<"   "<<"Length "<<length<<"  "<<"Breadth"<<breadth<<endl;
    }
    friend void sum(Rectangle1,Rectangle2,Rectangle3,Rectangle4);
};
class Rectangle4{
    private:
    int length,breadth;
    public:
    Rectangle4(int l,int b){
        length=l;
        breadth=b;
    }
    void Show(){
        cout<<"Recctangle 4 : "<<"   "<<"Length "<<length<<"  "<<"Breadth"<<breadth<<endl;
    }
    friend void sum(Rectangle1,Rectangle2,Rectangle3,Rectangle4);
};
void sum(Rectangle1 R1,Rectangle2 R2,Rectangle3 R3,Rectangle4 R4){
    int l_sum=R1.length+R2.length+R3.length+R4.length;
    int b_sum=R1.breadth+R2.breadth+R3.breadth+R4.breadth;
    cout<<"---------------------------------------------------"<<endl;
    cout<<"sum "<<"                            "<<l_sum<<"            "<<b_sum<<endl;
}
int main(){
    Rectangle1 R1(5,3);
    Rectangle2 R2(2,6);
    Rectangle3 R3(4,6);
    Rectangle4 R4(2,5);
    R1.Show();
    R2.Show();
    R3.Show();
    R4.Show();
    sum(R1,R2,R3,R4);
    return 0;
}
