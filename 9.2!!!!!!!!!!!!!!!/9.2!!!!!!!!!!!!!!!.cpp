#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "calculations.h" 

int main() {
    int x, z;
    double w;

    printf(" x: ");
    scanf("%d", &x);

    printf(" z: ");
    scanf("%d", &z);

    w = CALCULATE_W(x, z);

    PRINT_FLOAT(w);

    return 0;
}
