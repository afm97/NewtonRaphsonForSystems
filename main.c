#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "printArray.h"
#include "printMatrix.h"
#include "norm.h"

int main()
{
    /*
    double matrix[][5] = {{10, -1, 2, 0, 6},
                          {-1, 11, -1, 3, 25},
                          {2, -1, 10, -1, -11},
                          {0, 3, -1, 8, 15}};

    // Sol: x1 = 1, x2 = 2, x3 = -1, x4 = 1
    */

    double matrix[][5] = {{-4, 1, 1, 0, -50},
                          {1, -4, 0, 1, -100},
                          {1, 0, -4, 1, -50},
                          {0, 1, 1, -4, -100}};

    int rows = sizeof(matrix) / sizeof(matrix[0]);

    double solution[rows];
    zeros(rows, solution);

    double tolerance = 0.00001;
    unsigned int numberMaxOfIterations = 50;
    float relaxationFactor = 1.07;
}