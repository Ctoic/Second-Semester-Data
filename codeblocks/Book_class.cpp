#include<iostream>

using namespace std;

class Book{
    int book_num;
    char book_title[20];
    float price;
    void total_cost(int n){
    cout<<"The total cost is :"<<n*price<<endl;
    }
    public:
    void inputput(){
    cout<<"Enter name, number and price of the Book:"<<endl;
    cin>>book_num>>book_title>>price;
    }
    void purchase (){
    cout<<"Enter the number of copies:"<<endl;
    int co;
    cin>>co;

    total_cost(co);
    }


    };
    int main(){
    Book B1;
    B1.inputput();
    B1.purchase();

    }

