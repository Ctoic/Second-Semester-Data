#include <iostream>
using namespace std;

int *multiply(int *num1,int *num2)
{
	*num1 = 1;
	*num2 = 8;
	cout << num1 << "" << *num2 <<  "=" << (*num1 * *num2) << endl;
}

int *multiply(int *num1,int *num2,int *num3)
{
	*num1 = 6;
	*num2 = 7;
	*num3 = 3;
	cout << num1 << "" << num2 << "" << *num3 << "=" << (*num1 * *num2 * *num3) << endl;

}

int main()
{
	int a,b,c;

	*multiply(&a,&b);
	*multiply(&a,&b,&c);

	return 0;

}
