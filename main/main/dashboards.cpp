#include "MainMenu.h"
#
class Dashboard {
private:
    string firstName;

public:
    Dashboard(const string& fName) : firstName(fName) {}

    void welcome() {
        system("CLS");
        ascii();
        cout << setw(choicePos) << "" << "Welcome, " << firstName << "!" << endl;
        cout << endl;
    }
    void showOptions() {

        cout << setw(choicePos) << "" << "Your tests for today:" << firstName << endl;
        cout << endl;
        cout << setw(centerPos) << "" << "1. Algebra" << endl;
        cout << setw(centerPos) << "" << "2. Biology" << endl;
        cout << setw(centerPos) << "" << "3. Chemistry" << endl;
        cout << setw(centerPos) << "" << "4. Physics" << endl;
        cout << setw(centerPos) << "" << "5. English" << endl;
        cout << setw(centerPos) << "" << "6. Your Tests" << endl;
        cout << setw(centerPos) << "" << "7. Go back to the main menu" << endl;
    }

    void runDashboard() {
        welcome();
        showOptions();

        int choice;
        cout << endl;
        cout << setw(choicePos) << "" << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            system("CLS");
            algebraTest();
            break;
        case 2:
            system("CLS");
            chemistryTest();
            break;
        case 3:
            system("CLS");
            chemistryTest();
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
    void maindash() {
        welcome();
        cout << setw(centerPos) << "" << "1. Exams" << endl;
        cout << setw(centerPos) << "" << "2. Grades" << endl;
        cout << setw(centerPos) << "" << "3. Return to the main menu" << endl;
        cout << endl;
        cout << setw(choicePos) << "" << "Enter your choice: ";
        int choice;
        cin >> choice;
        if (choice == 1) {
            runDashboard();
        }
        if (choice == 2) {
            cout << endl;
        }
        else {
            system("CLS");
            main();
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
        dashboard.maindash();
    }
    inputFile.close();
}