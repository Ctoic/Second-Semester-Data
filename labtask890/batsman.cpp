#include<iostream>

using namespace std;

class batsman
{
private:
    /* data */
    int bcode;
    char bname[20];
    int inning,notout,runs;
    int batavg;

    void calcavg(){
        if(inning!=notout)
        batavg=runs/(inning-notout);

        else
        batavg=0;
    }
public:
    void readdata();
    void displaydata();

};

void batsman::readdata()
{
    cout<<"Enter Batsman code:";
    cin>>bcode;

    cout<<"Enter batsman name:";
    cin.ignore();
        cin.getline(bname,20);

        cout<<"Enter innings:";
        cin>>inning;

        cout<<"Enter notout:";
        cin>>notout;

        cout<<"Enter runs;";
        cin>>runs;

        calcavg();
        cout<<"=================="<<endl;



}

void batsman::displaydata(){
    cout<<"Batsman code"<<bcode<<endl;
    cout<<"Batsman name"<<bname<<endl;
    cout<<"INNINGS"<<inning<<endl;
    cout<<"Not out "<<notout<<endl;
    cout<<"Runs "<<runs<<endl;
    cout<<"Batting Average"<<batavg<<endl;


}
int main(){
    batsman mybatsman;
    mybatsman.readdata();
    mybatsman.displaydata();

    return 0;
}
