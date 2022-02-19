#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    cout<<3.4+2<<endl;
    cout<<3/4+2.3<<endl;
    cout<<1/2+3.2<<endl;// implicit type conversion in c++
    /* To avoid implicit type
    casting we will use cast operator
    Type casting in python was very
    eaasy but here we will*/
        cout<<"After changing type number 7.798:" <<static_cast<int>(7.798)<<endl;
        cout<<"After changing type of fraction 3/2: "<<static_cast<double>(3/2)<<endl;
        cout<<"After changing type number 7.798:" <<static_cast<long>(7.798)<<endl;
        cout<<"Converting A into inteeger:  "<<static_cast<int>('A')<<endl;
        cout<<"converting the AscII value to original char :: "<<static_cast<char>(65)<<endl;
        /*This is how we will change the dATA type of elements in ca++ but we can also change the data typr
        by uising c type casting*/
        cout<<int(33.3)<<endl;
        cout<<float(7897897)<<endl;
        cout<<long(3393.23)<<endl;
        cout<<double(3393.23)<<endl;

        // STRING DATA TYPE:
        string name="Najam Ali Abbas ";
        cout<<name<<endl;

        // Now taking input from the user as we discussed earlier that we have to send data to main mem
        // before it is manipulated and processed by the compiler
        // two steps allocate memory and include sstatement to put sata into that memory
        string Full_name;
        cout<<"Enter a string pal"<<endl;
        cin>>Full_name;
        cout<<" My name is : "<<Full_name<<endl;

        /* We can declare a data to be constant i=then we cannot change that variable value by mistake
         so it allow us to make our data secure and first we have to declare and initializ
         Named constant: A memory location whose content is not allowed to change during program execution.*/

    /* A data type is called simple if the variable or named
    constant of that type can store only one value at a time.*/
    float decimal;
    int x,y,z;
    z=2;
    x=y=z;
    cout<<x<<y<<z<<endl;
    cin>>decimal;
    cout<<"Here is your luckky number"<<decimal<<endl;

    /* we first declare and then initalize variable to use it in the body*/

    int number,number3=12;
    cout<<"My third number is :"<<number3<<endl;
    cout<<"Enter a number bruc::"<<endl;
    cin>>number;
    cout<<"Here we go pal"<<endl;

    // INCREAMENT AND DECREAMENT OPERATORS --: -- AND ++;

    cout<<"==============Post and Pre increament and discreament"<<endl;
    cout<<x<<endl;

    cout<<"here is your loop pal"<<endl;


    for(int i=0; i<4;i++){
    cout<<i<<endl;
    }


    int num4 , num5=10;
    num4=num5++;
    cout<<"number 4 is "<<num4<<endl;

















    return 0;
    }
