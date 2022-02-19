#include <iostream>

using namespace std;

int main()
{
    int a[6][6];
    int val=1;
    for(int i=0; i <6; i++){
        for (int j=0; j<6;  j++){
            a[i][j]=val;
            val+=1;
             cout<<"Values before assigneents"<<val<<endl;
            }

            }
    cout<<"Values After assignement : ----"<<endl;
        for(int i=0; i<6;i++){
            for(int j=0; j<6; j++){
            cout<<a[i][j]<<" ";
                }
            cout<<endl;
            }
    return 0;
}
