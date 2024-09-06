/* squarecube.c
 * ===========================================================
 * Name: Matthew Adsit
 * Section:T3
 * Project: Lab 2 - Variables, I/O, and Arithmetic Expressions
 * Purpose: Learn C basics
 */

// What do you need to #include to use the printf/scanf functions?

#include <stdio.h>
// Put Your Main Function Here
int main() {
    int squareLen = 0;
    printf("enter the length of a side of a square: ");
    scanf("%d", &squareLen);
    printf("perimeter of the square: %d\n", squareLen*4);
    printf("area of the square is: %d\n", squareLen*squareLen);
    printf("volume of a cube is: %d\n", squareLen*squareLen*squareLen);
    return 0;
}