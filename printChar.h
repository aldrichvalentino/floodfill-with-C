#ifndef PRINTCHAR_H
#define PRINTCHAR_H
#define PI 3.14159265

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <linux/fb.h>
#include <sys/mman.h>
#include <sys/ioctl.h>
#include <math.h>

void line(int x0, int y0, int x1, int y1, int divx, int divy, int r, int g, int b);
void printChar(char character, int dx, int dy, int r, int g, int b, float scale, float degree);
void floodFill(int x, int y, int r, int g, int b, int newcolor);
void clearScreen();

#endif