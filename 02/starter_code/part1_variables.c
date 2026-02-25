// part1_variables
//
// This program was written by ,
// on 26/02
//
// This program calculates the area of a circle

#include <stdio.h>

#define PI 3.14

int main(void) {
    // PI * radius^2
    // 1. Declare the variables
    double radius;
    // double pi;
    
    // 2. Initalise the variables
    printf("enter radius: ");
    // pi = 3.14;
    scanf("%lf", &radius);
    
    // 3. Calculate the area of the circle
    double result = PI * radius * radius;
    
    int var = 100;
    // 4. Print the result
    printf("The area is %.2lf and variable is %d\n", result, var);

    return 0;
}
