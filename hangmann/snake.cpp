#include<iostream>
#include<cstdlib>


#define width 50
#define hight 25

using namespace std;

int x = 10, y = 10;

//const int width=50, height=25;

void board()
{
    for(int i=0; i<hight;i++)
    {
        cout<<"\t\t#";
        for (int j= 0; j< width-2; j++)
        {
            if (i==0 || i==hight-1) cout<<"#";
            else if(i == y && j ==x) cout<<"0";
            else cout<<" ";
        }
        cout<<"#\n";
    }
}

int main()

{
    //while (true)
    {
      //   board(); 
        // x++;
        // system("clear"); CD
        CC

    }
    
  
    return 0;

}