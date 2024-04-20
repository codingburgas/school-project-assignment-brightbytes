#ifndef MAINMENU_H
#define MAINMENU_H

#include <iostream>
#include <iomanip>
#include <Windows.h>

using namespace std;


const int WIDTH = 80;
int centerPos = (WIDTH - 5) / 2;

void ascii(){
int asciiPos = (WIDTH - 30) / 2;

cout << "\x1b[33m";
cout << setw(asciiPos) << "" << "_____ _____ _______ _________________  _____" << endl;
cout << setw(asciiPos) << "" << "___  __)_______(__)______   _  /\\_  )\\_   _  /\\_______" << endl;
cout << setw(asciiPos) << "" << "|\\   /\\  \\__  \\  \\/\\   \\ |\\  \\  \\  / / / / /\\   \\   /\\" << endl;
cout << setw(asciiPos) << "" << "\\_)_\\/\\  /_/\\  \\/\\  /\\ \\_)  )  )/ / ((_\\/\\/   /  / /" << endl;
cout << setw(asciiPos) << "" << " \\___\\_/\\____\\_/\\_\\ \\__\\_\\/ /\\_\\/\\__\\\\__/\\__/  /(__)\\" << endl;
cout << setw(asciiPos) << "" << "        \\_/      \\/_/\\/_/" << endl;
cout << endl;
cout << endl;
cout << endl;
cout << "\x1b[37m";
}
#endif