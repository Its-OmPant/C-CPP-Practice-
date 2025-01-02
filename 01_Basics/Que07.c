/* Write a program to print a given number without its last digit */

#include<stdio.h>

int main(){
    int number, numWithoutLastDigit;

    printf("Enter a number: ");
    scanf("%d",&number);

    numWithoutLastDigit = number / 10;
    printf("Number %d without last Digit is %d\n", number, numWithoutLastDigit);
    return 0;
}