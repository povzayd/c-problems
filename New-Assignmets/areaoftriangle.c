#include <stdio.h>
int main()
{
float base, height;
printf("AREA CALCULATOR FOR A TRIANGLE\n");
printf("Enter the length of the \"BASE\": ");
scanf("%f", &base);
printf("Enter the length of the \"HEIGHT\": ");
scanf("%f", &height);
printf("AREA OF TRIANGLE WILL BE: %f", base*height/2);
return 0;
}
