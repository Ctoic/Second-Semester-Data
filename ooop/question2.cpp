#include <iostream>
using namespace std;
int main() {
int amount;
cout << "please enter amount: ";
cin >> amount;
int lst[7] = { 1500, 1000, 500, 100, 50, 20, 10 };
int lst1[7] = { 0 };
for (int i = 0; i < 7; i++) {
if (amount >= lst[i]) {
lst1[i] = amount / lst[i];
amount = amount - lst1[i] * lst[i];
}
}
for (int j = 0; j < 7; j++) {
if (lst1[j] != 0) {
cout << lst1[j] << " x " << lst[j] << endl;
}
}
}