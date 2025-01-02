/* Write a program to swap values of two int variables */

#include<stdio.h>
int main(){
    int number1, number2,temp;
    printf("Enter Two Numbers: ");
    scanf("%d %d", &number1,&number2);

    printf("Number Before Swap: Number 1: %d, Number 2: %d\n", number1, number2);

    temp = number1;
    number1 = number2;
    number2 = temp;

    printf("Number After Swap: Number 1: %d, Number 2: %d\n", number1, number2);
    return 0;
}