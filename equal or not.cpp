#include<iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    if (num1 == num2) {
        cout << "Equal" << endl;
    }
    else {
        cout << "Not Equal" << endl;
    }

    return 0;
}

