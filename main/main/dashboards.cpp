#include "MainMenu.h"

class Dashboard {
private:


    string firstName;

    string readFirstNameFromFile(const string& filename) {
        ifstream inputFile(filename);
        if (!inputFile.is_open()) {
            cerr << "Error: Unable to open file " << filename << endl;
            return "";
        }

        string line;
        if (getline(inputFile, line)) {
            istringstream iss(line);
            string firstName;
            getline(iss, firstName, ',');
            inputFile.close();
            return firstName;
        }
        else {
            inputFile.close();
            return "";
        }
    }

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
            biologyTest();
            break;
        case 3:
            system("CLS");
            chemistryTest();
            break;
        case 4:
            system("CLS");
            physicsTest();
            break;
        case 5:
            system("CLS");
            englishTest();
            break;
        case 6:
            system("CLS");
            yourtests();
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
    inputFile.seekg(0, ios::end);
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