#include "MainMenu.h"
#include "StudentReg.h"
using namespace std;

void displayErrorMessage(const string& message) {
    cout << "\x1b[31m" << setw(centerPos) << message << "\x1b[0m" << endl;
}

// Function to register a new student
void studentreg() {
    ascii();

    ofstream studentFile("../students.txt", ios::app);

    if (!studentFile) {
        cout << setw(centerPos) << "Error opening file." << endl;
        cout << setw(centerPos) << "Press any button to go back: ";
        cin.ignore();
        cin.get();
        system("CLS");
        main();
    }
    string firstName, lastName, email, password;
    int age;

    cout << setw(centerPos) << "Enter your first name: ";
    cin >> firstName;

    cout << setw(centerPos) << "Enter your last name: ";
    cin >> lastName;

    cout << setw(centerPos) << "Enter your email: ";
    cin >> email;

    cout << setw(centerPos) << "Enter your password (8 to 16 characters): ";
    cin >> password;
    if (password.length() < 8 || password.length() > 16) {
        system("CLS");
        cout << endl;
        displayErrorMessage("Password must be between 8 and 16 characters long.");
        cin.ignore();
        cin.get();
        system("CLS");
        studentreg();
        return;
    }

    cout << setw(centerPos) << "Enter your age: ";
    cin >> age;
    if (cin.fail() || age < 9 || age > 120) {
        system("CLS");
        displayErrorMessage("Age must be a number between 9 and 120.");
        cout << endl;
        cin.clear();
        cin.ignore();
        cin.get();
        system("CLS");
        studentreg();
        return;
    }

    studentFile << firstName << "," << lastName << "," << email << "," << password << "," << age << endl;
    system("CLS");
    cout << "\x1b[32m" << "Registration successful!" << "\x1b[0m" << endl;
    main();
    studentFile.close();
}
