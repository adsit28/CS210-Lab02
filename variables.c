/* variables.c
 * ===========================================================
 * Name: Matthew Adsit
 * Section:T3
 * Project: Lab 2 - Variables, I/O, and Arithmetic Expressions
 * Purpose: Learn C basics
 */

// What do you need to #include to use the printf/scanf functions?
#include <stdio.h>

// Put Your Main Function Here
int main () {
    int firNum = 0;
    int secNum = 0;
    printf("enter two integers: ");
    scanf("%d %d", &firNum, &secNum);
    printf("valueOne divided by valueTwo is %d\n", firNum/secNum);
    printf("valueOne multiplied by valueTwo is %d\n", firNum*secNum);
    printf("valueOne incremented is %d\n", firNum+1);
    printf("valueTwo decremented is %d\n", secNum-1);
    return 0;
}