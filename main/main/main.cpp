#include <iostream>

using namespace std;

class Menu {
public:
    void Menu() {
        cout << "Menu:" << endl;
        cout << "1. Option 1" << endl;
        cout << "2. Option 2" << endl;
        cout << "3. Option 3" << endl;
        cout << "4. Exit" << endl;
    }

    void processChoice(char choice) {
        switch (choice) {
            case '1':
                cout << "Login" << endl;
                break;
            case '2':
                cout << "Sign up" << endl;
                break;
            case '3':
                cout << "Forgot pasword" << endl;
                break;
            case '4':
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }
    }
};