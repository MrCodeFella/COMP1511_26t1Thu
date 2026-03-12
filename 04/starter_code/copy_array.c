#include <stdio.h>

#define SIZE_1 3
#define SIZE_2 10

int main(void) {

    // int array[3] = {1, 2, 3};
    double array_1[SIZE_1] = {1.0, 2.0, 3.0};
    double array_2[SIZE_2] = { 0.0 };

    for (int i = 0; i < SIZE_1; i++) {
        array_2[i] = array_1[i];
    }

    for (int i = 0; i < SIZE_2; i++) {
        printf("%.2lf ", array_2[i]);
    }

    return 0;
}