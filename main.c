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
    char inputCharacter;
    printf("masukkan input karakter :");
    scanf("%c", &inputCharacter);

    printChar(inputCharacter, 0, 0, 255, 255, 255);

	return 0;
}
