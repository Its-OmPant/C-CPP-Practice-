/* 
WAP to take time as an input in below given format and convert the time format and
display the result as given below.
User Input date format–
“HH:MM”
Output format–
“HH hour and MM Minute”
*/

#include<stdio.h>
int main(){
    int hours,minutes;

    printf("Enter Time (HH:MM): ");
    scanf("%d:%d",&hours,&minutes);

    printf("Time: %.2d Hours and %.2d Minutes\n",hours,minutes);
    return 0;
}