#include<iostream>
using namespace std;
class Rectangle_two;
class Rectangle_three;
class Rectangle_four;
class Rectangle_one{
    private:
    int length,breadth;
    public:
    Rectangle_one(int l,int b){
        length=l;
        breadth=b;
    }
    void Show(){
        cout<<"Recctangle 1 : "<<"   "<<"Length "<<length<<"  "<<"Breadth"<<breadth<<endl;
    }
    friend void sum(Rectangle_one,Rectangle_two,Rectangle_three,Rectangle_four);
};
class Rectangle_two{
    private:
    int length,breadth;
    public:
    Rectangle_two(int l,int b){
        length=l;
        breadth=b;
    }
    void Show(){
        cout<<"Recctangle 2 : "<<"   "<<"Length "<<length<<"  "<<"Breadth"<<breadth<<endl;
    }
    friend void sum(Rectangle_one,Rectangle_two,Rectangle_three,Rectangle_four);
};
class Rectangle_three{
    private:
    int length,breadth;
    public:
    Rectangle_three(int l,int b){
        length=l;
        breadth=b;
    }
    void Show(){
        cout<<"Recctangle 3 : "<<"   "<<"Length "<<length<<"  "<<"Breadth"<<breadth<<endl;
    }
    friend void sum(Rectangle_one,Rectangle_two,Rectangle_three,Rectangle_four);
};
class Rectangle_four{
    private:
    int length,breadth;
    public:
    Rectangle_four(int l,int b){
        length=l;
        breadth=b;
    }
    void Show(){
        cout<<"Recctangle 4 : "<<"   "<<"Length "<<length<<"  "<<"Breadth"<<breadth<<endl;
    }
    friend void sum(Rectangle_one,Rectangle_two,Rectangle_three,Rectangle_four);
};
void sum(Rectangle_one R1,Rectangle_two R2,Rectangle_three R3,Rectangle_four R4){
    int l_sum=R1.length+R2.length+R3.length+R4.length;
    int b_sum=R1.breadth+R2.breadth+R3.breadth+R4.breadth;
    cout<<"---------------------------------------------------"<<endl;
    cout<<"sum "<<"                            "<<l_sum<<"            "<<b_sum<<endl;
}
int main(){
    Rectangle_one R1(3,2);
    Rectangle_two R2(10,12);
    Rectangle_three R3(4,1);
    Rectangle_four R4(7,8);
    R1.Show();
    R2.Show();
    R3.Show();
    R4.Show();
    sum(R1,R2,R3,R4);
    return 0;
}
