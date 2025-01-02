// WAP to find the area of the circle. Take radius of circle from user as input and print the result

#include<stdio.h>
#include<math.h>

int main(){
    double radius, area;

    printf("Enter Radius: ");
    scanf("%lf", &radius);

    area = M_PI * (pow(radius,2));

    printf("Area Of Circle of radius %.2lf is: %.2lf",radius,area);

    return 0;
}