#include <iostream>
using namespace std;


void display(int m[5]) {
    cout << "Displaying salary: " << endl;

        
    for (int i = 0; i < 5; ++i) {
        cout << "Employee " << i + 1 << ": " << m[i] << endl;
    }
}

int main() {

    int salary[5] = {200000,300000,230000,1200000,34342300};
    
    // call display function
    
    display(salary);

    return 0;
}