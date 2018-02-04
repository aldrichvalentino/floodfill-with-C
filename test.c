#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "printChar.h"

int main(void) {
    int lines, j;
    char i;
    int *coordinates, *triangles;
    FILE *file;
    file = fopen("characters/c.txt", "r");

    clearScreen();

    // get number of point
    fscanf(file, "%d", &lines);
    
    // array of point
    coordinates = (int*) malloc ((2 * lines) * sizeof(int));
    for(j = 0; j < lines; j++){
        int x = 0, y = 0;
        fscanf(file, "%d %d", &x, &y);        
        coordinates[j*2] = x;
        coordinates[(j*2)+1] = y;
    }

    // get number of triangles
    fscanf(file, "%d", &lines);
    
    // array of point
    triangles = (int*) malloc ((3 * lines) * sizeof(int));
    for(j = 0; j < lines; j++){
        int point1, point2, point3;
        fscanf(file, "%d %d %d", &point1, &point2, &point3);        
        triangles[j*3] = point1;
        triangles[(j*3)+1] = point2;
        triangles[(j*3)+2] = point3;
    }

    // print the char
    for(i = 0; i < lines; i++){
        int point1, point2, point3;
        int x0, y0, x1, y1, x2, y2;

        point1 = triangles[(i*3)];
        point2 = triangles[(i*3)+1];
        point3 = triangles[(i*3)+2];
        
        x0 = coordinates[point1*2];
        y0 = coordinates[(point1*2+1)];

        x1 = coordinates[point2*2];
        y1 = coordinates[(point2*2+1)];

        x2 = coordinates[point3*2];
        y2 = coordinates[(point3*2+1)];

        line(x0, y0, x1, y1, 0, 0, 255, 255, 255);
        line(x0, y0, x2, y2, 0, 0, 255, 255, 255);
        line(x2, y2, x1, y1, 0, 0, 255, 255, 255);

        int middleX = (x0 + x1 + x2)/3;
        int middleY = (y0 + y1 + y2)/3;

        floodFill(middleX, middleY, 0,0,0, 255);
    }

    fclose(file);
    printf("oke\n");

    return 0;
}