#ifndef MAINMENU_H
#define MAINMENU_H

#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <fstream>

using namespace std;

const int WIDTH = 80;
extern int centerPos;
extern int choicePos;
extern int choice;

void ascii();
int main();
void studentreg();
void message();
void checkFile();
#endif