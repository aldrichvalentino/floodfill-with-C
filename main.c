#include "printName.h"
#include "printPlane.c"
#include "shootPlane.h"
#include <stdio.h>
#include <stdlib.h>
#include <termios.h>

// struct termios initial_settings, new_settings;
// struct termios initial_settings,
//                new_settings;

int main() {
	int length, i, j, k;
	char * Name;
	char * Name2;
    char * Name3;
	char * Name4;
    char * Name5;
	char * Name6;
    char * Name7;
	char * Name8;
    int n;
    int bulletCounter = 0;
    int bullets[10];
    unsigned char key;

    clearScreen();
    // char inputCharacter;
    // printf("masukkan input karakter : ");
    // scanf("%c", &inputCharacter);

    printChar('c', 0, 0, 0, 172, 124, 1, 45);
    // printChar('f', 300, 200, 0, 0, 255);
    // printChar('j', 400, 200, 0, 255, 0);
    // printChar('q', 500, 200, 255, 255, 255);
    // printChar('s', 600, 200, 255, 255, 255);
    // printChar('r', 700, 200, 255, 255, 255);
    // printChar('S', 800, 200, 255, 255, 255);
    // printChar('V', 900, 200, 255, 255, 255);

	return 0;
}
