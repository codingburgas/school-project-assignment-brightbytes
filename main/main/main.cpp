#include "MainMenu.h"
using namespace std;

int main() {

    const int WIDTH = 80;
    int centerPos = (WIDTH - 5) / 2;
    int choicePos = (WIDTH - 4) / 2;
    int choice;
    
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
            // Student D
            break;
        case 2:
            // Student Dashboard code
            break;
        case 3:
            // School Info code
            break;
        case 4:
            // Message Support code
            break;
        case 5:
            cout << "Exiting program..." << endl;
            break;
        default:
            system("CLS");
            cout << "\x1b[31m" << setw(centerPos) << "" << "Invalid choice. Try again." << "\x1b[37m" << endl;
            cout << endl;
            main();
        }
    } while (choice != 5);
}