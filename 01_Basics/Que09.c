/* Write a program to swap values of two int variables without using a third variable. */
#include<stdio.h>
int main(){
    int number1,number2;

    printf("Enter two numbers: ");
    scanf("%d %d",&number1,&number2);

    printf("Number Before Swap: Number 1: %d, Number 2: %d\n", number1, number2);

    number1 = number1 + number2;
    number2 = number1 - number2;
    number1 = number1 - number2;

    printf("Number After Swap: Number 1: %d, Number 2: %d\n", number1, number2);
    return 0;
}