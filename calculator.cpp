#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;
    char choice;

    do {
        // Input two numbers
        cout << "\nEnter first number: ";
        cin >> num1;


        // Choose operation
        cout << "Choose an operation (+, -, *, /): ";
        cin >> op;

        cout << "Enter second number: ";
        cin >> num2;

        
        // Perform calculation
        switch (op) {
            case '+':
                cout << "Result = " << num1 + num2 << endl;
                break;

            case '-':
                cout << "Result = " << num1 - num2 << endl;
                break;

            case '*':
                cout << "Result = " << num1 * num2 << endl;
                break;

            case '/':
                if (num2 != 0)
                    cout << "Result = " << num1 / num2 << endl;
                else
                    cout << "Error: Division by zero is not allowed." << endl;
                break;

            default:
                cout << "Invalid operation!" << endl;
        }

        // Ask user to continue
        cout << "\nDo you want to perform another operation? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "\nCalculator exited. Thank you!" << endl;

    return 0;
}
