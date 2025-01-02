/* Write a program to print unit digit of a given number */

#include<stdio.h>

int main(){
    int number, unitDigit;

    printf("Enter a number: ");
    scanf("%d",&number);

    unitDigit = number % 10;
    printf("Unit Digit Of %d is: %d\n",number,unitDigit);
    return 0;
}