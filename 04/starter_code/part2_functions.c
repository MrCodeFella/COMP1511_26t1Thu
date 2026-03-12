// functions.c
//
// Written by Sofia De Bellis (z5418801)
// on March 2024
//
// This program is a simple demonstration of functions

#include <stdio.h>

// TODO: Function prototype
int add(int x, int y);

int main(void) {
    int result;
    int num1 = 5;
    int num2 = 3;
    // num1 = 5 num2 = 3 result = ??

    // TODO: Function call 
    result = add(num1, num2);
    // num1 = 5 num2 = 3 result = 8

    printf("Result: %d\n", result);
    return 0;
}

// TODO: Function definition
int add(int x, int y) {
    // x = 5 y = 3 
    // result = 8
    int result = x + y;
    
    return result;
}
