/* Write a program which takes a character as an input and displays its ASCII code */

#include<stdio.h>

int main(){
    char character;

    printf("Enter a character to get its ASCII Value: ");
    scanf("%c",&character);

    printf("ASCII Value of character %c is: %d\n", character, (int)character);
    return 0;
}