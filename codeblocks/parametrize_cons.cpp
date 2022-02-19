#include<iostream>

using namespace std;

class student
{


        private:
        char name[15],address[25];

        public:
        student(char mm[],add[])
        {
            strcpy(name,nm);
            strcpy(address,add);


        }

        void show()
        {
        cout<<"Name is :"<<name<<endl;
        cout<<"Address is "<<address<<endl;


        }


        };


        class marks: public student
        {
            private:
            int sub1,sub2,sub3,total;


            public:
            marks(char nm[],char add[], int a,int b, int c): student(nm,add)
            {
                sub1=a;
                sub2=b;
                sub3=c;
                total=a+b+c;



            }
            void show_detail();
            marks marks("djhfjkh","kjsdhfkj",23,34,33)
            marks.show_detail();

            void marks::show_detail()
        {
        show();
        cout<<"marks in 1st sub:"<<sub1<<endl;
        cout<<"marks in 2nd sub:"<<sub2<<endl;
        cout<<"marks in third sub:"<<sub3<<endl;

        cout<<"total:"<<total<<endl;




        }




            };


    class Show: public student,public marks{



    };











int main(){

    return 0;


        }


