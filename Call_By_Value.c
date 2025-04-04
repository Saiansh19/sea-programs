#include<stdio.h>
#define Pi 3.14159
double calculateArea(double radius)
{
    return (Pi * radius * radius);
}

int main()
{
    double radius=7.0;
    double area=calculateArea(radius);
    printf("The Area of the circle with radius %.2f is: %.2f\n",radius, area);
    return 0;
}