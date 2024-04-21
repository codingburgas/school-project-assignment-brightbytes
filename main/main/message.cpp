#include "MainMenu.h"
#include <cstdlib> 
#include <iostream>
#include <iomanip>

using namespace std;

void message() {
    do {
        ascii();
        int newPos = (WIDTH - 4) / 1.5;

        cout << setw(newPos) << "" << "Our Support" << endl;
        cout << endl;
        cout << setw(centerPos) << "" << "1. Viktor Kanev - Scrum Trainer" << endl;
        cout << setw(centerPos) << "" << "2. Teodor Madzharov - BackEnd Developer" << endl;
        cout << setw(centerPos) << "" << "3. Kristiyan Ivanov - BackEnd Developer" << endl;
        cout << setw(centerPos) << "" << "4. Nedyalko Libchev - BackEnd Developer" << endl;
        cout << setw(centerPos) << "" << "5. Steliyan Nikolov - BackEnd Developer" << endl;
        cout << setw(centerPos) << "" << "6. Mihail Nikolov - BackEnd Developer" << endl;
        cout << setw(centerPos) << "" << "7. Polina Dineva - QA Engineer" << endl;

        cout << endl;
        cout << setw(choicePos) << "" << "Enter your choice or press 0 to return: ";
        cin >> choice;

        switch (choice) {
        case 0:
            system("CLS");
            main();
            break;
        case 1:
            system("start mailto:vbkanev22@codingburgas.bg");
            system("CLS");
            message();
            break;
        case 2:
            system("start mailto:tsmadzharov21@codingburgas.bg");
            system("CLS");
            message();
            break;
        case 3:
            system("start mailto:kdivanov21@codingburgas.bg");
            system("CLS");
            message();
            break;
        case 4:
            system("start mailto:nnlibchev22@codingburgas.bg");
            system("CLS");
            message();
            break;
        case 5:
            system("start mailto:ssnikolov21@codingburgas.bg");
            system("CLS");
            message();
            break;
        case 6:
            system("start mailto:manikolov22@codingburgas.bg");
            system("CLS");
            message();
            break;
        case 7:
            system("start mailto:psdineva21@codingburgas.bg");
            system("CLS");
            message();
            break;
        default:
            system("CLS");
            cout << "\x1b[31m" << setw(centerPos) << "" << "Invalid choice. Try again." << "\x1b[37m" << endl;
            cout << endl;
            break;
            message();
        }
    } while (choice != 8);
}
