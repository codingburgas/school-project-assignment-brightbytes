#pragma once
#ifndef MAINMENU_H
#define MAINMENU_H
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;
struct MenuItem {
	string label;
	void (*action)();
};
struct MenuNode {
	MenuItem data;
	MenuNode* next;
};
void ascii() {


	cout << "\033[1;94m";
	int screenWidthASCII = 90;
	cout << endl;

	cout << setw(screenWidthASCII / 2 + 34) << "  ____       _       _     _   ____        _             " << endl;
	cout << setw(screenWidthASCII / 2 + 34) << " |  _ \     (_)     | |   | | |  _ \      | |            " << endl;
	cout << setw(screenWidthASCII / 2 + 34) << " | |_) |_ __ _  __ _| |__ | |_| |_) |_   _| |_ ___  ___  " << endl;
	cout << setw(screenWidthASCII / 2 + 34) << " |  _ <| '__| |/ _` | '_ \| __|  _ <| | | | __/ _ \/ __| " << endl;
	cout << setw(screenWidthASCII / 2 + 34) << " | |_) | |  | | (_| | | | | |_| |_) | |_| | ||  __/\__ \ " << endl;
	cout << setw(screenWidthASCII / 2 + 34) << " |____/|_|  |_|\__, |_| |_|\__|____/ \__, |\__\___||___/ " << endl;
	cout << setw(screenWidthASCII / 2 + 34) << "                __/ |                 __/ |              " << endl;
	cout << setw(screenWidthASCII / 2 + 34) << "               |___/                 |___/               " << endl;


	cout << "\033[0m";

	cout << endl;
	cout << endl;
	cout << endl;
}
void displayMenu(MenuNode* head, int screenWidth);
int main();
#endif
