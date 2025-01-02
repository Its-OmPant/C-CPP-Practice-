/* Write a program to input a three digit number and display the sum of the digits */
#include<stdio.h>
int main(){
    int number,sum,duplicate;
    printf("Enter a number: ");
    scanf("%d",&number);

    duplicate = number;
    sum = 0;
    while(duplicate > 0){
        sum += duplicate % 10;
        duplicate/=10;
    }

    printf("SUm of digits of Number %d is %d\n",number,sum);
    return 0;
}