/* Write a program to check whether the given number is even or odd using a bitwise
operator. */
#include<stdio.h>
int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    
    if (number&1)
        printf("Number %d is Odd\n", number);
    else
        printf("Number %d is Even\n", number);

    return 0;
}