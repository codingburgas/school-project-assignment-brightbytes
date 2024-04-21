#include "MainMenu.h"

class Dashboard {
private:
    string firstName;

public:
    Dashboard(const string& fName) : firstName(fName) {}

    void welcome() {
        system("CLS");
        ascii();
        cout << setw(choicePos) << "" << "\x1b[32m" << "Welcome, " << firstName << "!" << "\x1b[0m" << endl;
        cout << endl;
    }

    void showOptions() {
        // Display test options
        cout << setw(choicePos) << "" << "Your tests for today:" << endl;
        cout << endl;
        cout << setw(centerPos) << "" << "1. Algebra" << endl;
        cout << setw(centerPos) << "" << "2. Biology" << endl;
        cout << setw(centerPos) << "" << "3. Chemistry" << endl;
        cout << setw(centerPos) << "" << "4. Physics" << endl;
        cout << setw(centerPos) << "" << "5. English" << endl;
        cout << setw(centerPos) << "" << "6. Make Your Own Test" << endl;
        cout << setw(centerPos) << "" << "7. Go back to the main menu" << endl;
    }

    void runDashboard() {
        welcome();
        showOptions();

        int choice;
        cout << endl;
        cout << setw(choicePos) << "" << "Enter your choice: ";
        cin >> choice;

        // Perform actions based on user's choice (switch statement here)
        switch (choice) {
        case 1:
            // Code for Test 1
            break;
        case 2:
            // Code for Test 2
            break;
        case 3:
            // Code for Test 3
            break;
        case 4:
            // Code for Test 4
            break;
        case 5:
            // Code for Test 5
            break;
        case 6:
            // Code for Make Your Own Test
            break;
        case 7:
            system("CLS");
            main();
            break;
        default:
            system("CLS");
            cout << setw(choicePos) << "" << "\x1b[31m" << "Invalid choice. Please try again." << "\x1b[0m" << endl;
            runDashboard();
            break;
        }
    }
};
void checkFile() {
    ifstream inputFile("../students.txt");
    inputFile.seekg(0, ios::end); // Move file pointer to end
    if (inputFile.tellg() == 0) {
        system("CLS");
        cout << setw(choicePos) << "" << "\x1b[31m" << "No student information available. Please register first." << "\x1b[0m" << endl;
        main();
    }
    else {
        system("CLS");
        string firstName;
        Dashboard dashboard(firstName);
        dashboard.runDashboard();
    }
    inputFile.close();
}
