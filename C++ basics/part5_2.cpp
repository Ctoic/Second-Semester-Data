// C++ program to print all Even
// and Odd numbers from 1 to N

#include <bits/stdc++.h>
using namespace std;

void printEvenNumbers(int N)
{

	cout << "Even: ";
	for (int i = 1; i <= 2 * N; i++) {

	
		if (i % 2 == 0)
			cout << i << " ";
	}
}


void printOddNumbers(int N)
{

	cout << "\nOdd: ";
	for (int i = 1; i <= 2 * N; i++) {


		if (i % 2 != 0)
			cout << i << " ";
	}
}


int main()
{

	int N = 5;

	printEvenNumbers(N);
	printOddNumbers(N);

	return 0;
}
