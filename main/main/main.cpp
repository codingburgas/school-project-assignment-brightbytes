#include "MainMenu.h"
using namespace std;

int centerPos = (WIDTH - 5) / 2;
int choicePos = (WIDTH - 4) / 2;
int choice;

void ascii() {
    
    int asciiPos = (WIDTH - 40) / 2;

    cout << "\x1b[33m";
    cout << endl;
    cout << setw(asciiPos) << "" << "________       _____        ______ _____     ________        _____             " << endl;
    cout << setw(asciiPos) << "" << "___  __ )_________(_)______ ___  /___  /_    ___  __ )____  ___  /_____________" << endl;
    cout << setw(asciiPos) << "" << "__  __  |_  ___/_  /__  __ `/_  __ \\  __/    __  __  |_  / / /  __/  _ \\_  ___/" << endl;
    cout << setw(asciiPos) << "" << "_  /_/ /_  /   _  / _  /_/ /_  / / / /_      _  /_/ /_  /_/ // /_ /  __/(__  ) " << endl;
    cout << setw(asciiPos) << "" << "/_____/ /_/    /_/  _\\__, / /_/ /_/\\__/      /_____/ _\\__, / \\__/ \\___//____/  " << endl;
    cout << setw(asciiPos) << "" << "                    /____/                           /____/                    " << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "\x1b[37m";
}
int main() {
    
    
    do {
        ascii();
        
        cout << setw(choicePos) << "" << "Select Your Opiton" << endl;
        cout << endl;
        cout << setw(centerPos) << "" << "1. Student Register" << endl;
        cout << setw(centerPos) << "" << "2. Student Dashboard" << endl;
        cout << setw(centerPos) << "" << "3. BrightBytes Info" << endl;
        cout << setw(centerPos) << "" << "4. Message Support" << endl;
        cout << setw(centerPos) << "" << "5. Exit" << endl;
        cout << endl;
        cout << setw(choicePos) << "" << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            system("CLS");
            studentreg();
            break;
        case 2:
            // Student Dashboard code
            break;
        case 3:
            
        case 4:
            system("CLS");
            message();
            break;
        case 5:
            system("CLS");
            ascii();
            cout << setw(centerPos) << "" << "Exiting program..." << endl;
            exit(0);
            break;
        default:
            system("CLS");
            cout << "\x1b[31m" << setw(centerPos) << "" << "Invalid choice. Try again." << "\x1b[37m" << endl;
            cout << endl;
            main();
        }
    } while (choice != 5);
}