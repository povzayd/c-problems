#include <stdio.h>
int main()
{
const float PI = 3.142857;
float radius, area, circumference;

printf("Enter the \"RADIUS\" of the cirrcle: ");
scanf("%f", &radius);
area = (PI * radius * radius);
circumference = (2 * PI * radius);
printf("The Area of the circle will be %f & the circumference will be equal to %f.", area, circumference);
return 0;
}
