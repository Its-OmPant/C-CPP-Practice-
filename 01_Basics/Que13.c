/* Write a program to print size of an int, a float, a char and a double type variable */
#include<stdio.h>
int main(){
    // int num = 6;
    // float num2  = 4.5;
    // char ch = 'a';
    // double d = 780.099;

    printf("Size of int: %lu Bytes\n", sizeof(int));
    printf("Size of float: %lu Bytes\n", sizeof(float));
    printf("Size of char: %lu Bytes\n", sizeof(char));
    printf("Size of double: %lu Bytes\n", sizeof(double));
    return 0;
}