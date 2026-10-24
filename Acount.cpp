#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

// Function សម្រាប់ម៉ាស៊ីនគិតលេខ
void runCalculator() {
    char continueChoice;
    do {
        system("cls");
        cout << "==================== Welcome Calculator ========================\n";
        double num1, num2;
        char op;

        cout << "\n\t Input Number 1 : ";
        cin >> num1;
        cout << "\t Input Number 2 : ";
        cin >> num2;
        cout << "\t Input Operator (+, -, *, /) : ";
        cin >> op;

        switch (op) {
            case '+':
                cout << "\n\t Result: " << num1 << " + " << num2 << " = " << num1 + num2;
                break;
            case '-':
                cout << "\n\t Result: " << num1 << " - " << num2 << " = " << num1 - num2;
                break;
            case '*':
                cout << "\n\t Result: " << num1 << " * " << num2 << " = " << num1 * num2;
                break;
            case '/':
                if (num2 != 0) {
                    cout << "\n\t Result: " << num1 << " / " << num2 << " = " << num1 / num2;
                } else {
                    cout << "\n\t Cannot divide by zero!";
                }
                break;
            default:
                cout << "\n\t Error: Invalid Operator!";
        }

        cout << "\n\n Please Input (b = Back, c = Continue) : ";
        cin >> continueChoice;
    } while (continueChoice == 'c' || continueChoice == 'C');
}

// Function សម្រាប់មេលេខ
void runMultiplicationTable() {
    char continueChoice;
    do {
        system("cls");
        cout << "==================== Welcome Multiple Calculator ========================\n";
        int number;
        cout << "\nInput Number: ";
        cin >> number;

        cout << "\n--- Multiplication Table for " << number << " ---\n";
        for (int i = 1; i <= 10; i++) {
            cout << number << " x " << i << " = " << number * i << endl;
        }

        cout << "\nPlease Input (b = Back, c = Continue) : ";
        cin >> continueChoice;
    } while (continueChoice == 'c' || continueChoice == 'C');
}

// Function សម្រាប់គូរផ្កាយ
void runShowStar() {
    char continueChoice;
    do {
        system("cls");
        cout << "==================== Show Star ========================\n";
        int starCount;
        cout << "\nInput Number of rows: ";
        cin >> starCount;

        cout << "\n";
        for (int i = 1; i <= starCount; i++) {
            for (int j = 1; j <= i; j++) {
                cout << " *";
            }
            cout << endl;
        }

        cout << "\nPlease Input (b = Back, c = Continue) : ";
        cin >> continueChoice;
    } while (continueChoice == 'c' || continueChoice == 'C');
}

int main() {
    const string correctUser = "Chantha";
    const string correctPass = "Chantha@123";
    string username, password;

    while (true) {
        system("cls");
        cout << "\n\t============ Form Login =========\n";
        cout << "\tPlease Input Username : ";
        cin >> username;
        cout << "\tPlease Input Password : ";
        cin >> password;

        // ផ្ទៀងផ្ទាត់ការ Login
        if (username == correctUser && password == correctPass) {
            int choice = 0;
            while (choice != 4) {
                system("cls");
                cout << "================ Main Dashboard ================\n";
                cout << "Welcome, " << correctUser << "!\n\n";
                cout << "1. Calculator \n";
                cout << "2. Multiple Calculator \n";
                cout << "3. Show Star Pattern \n";
                cout << "4. Logout \n";
                cout << "------------------------------------------------\n";
                cout << "Enter your choice: ";
                cin >> choice;

                switch (choice) {
                    case 1:
                        runCalculator();
                        break;
                    case 2:
                        runMultiplicationTable();
                        break;
                    case 3:
                        runShowStar();
                        break;
                    case 4:
                        cout << "\nLogging out...\n";
                        break;
                    default:
                        cout << "\nInvalid choice! Please choose again.\n";
                        system("pause");
                }
            }
        } else {
            cout << "\n Incorrect Username or Password! Press Enter to try again...\n";
            system("pause");
        }
    }

    return 0;
}