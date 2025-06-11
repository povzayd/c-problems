#include <stdio.h>
int main()
{
float length, width;
printf("Perimeter Calculator\n");
printf("Enter length: ");
scanf("%f", &length);
printf("Enter width: ");
scanf("%f", &width);
printf("The Perimeter of the rectangle will be: %f", 2*length + 2*width);
return 0;
}

