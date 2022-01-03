#include <iostream>

using namespace std;


int main{
    int option;
    int num1;
    int num2;
    int result;
    
    cout << "Enter first number: " << endl;
    cin >> num1;
    cout << "Enter second number: " << endl;
    cin >> num2;
    cout << "1.Addition" << endl;
    cout << "2.Subtraction" << endl;
    cout << "3.Multiplication" << endl;
    cout << "4.Division" << endl;
    cout << "Pick an option: " << endl;
    cin >> option;

    switch (option) {
        case 1:
            num1 += num2;
            return num1;
            break;
        
        case 2:
            num1 -= num2;
            return num1;
            break;

        case 3:
            num1 *= num2;
            return num1;
            break;

        case 4:
            num1 /= num2;
            return num1;
            break;
    }
    return 0;
}
