#include <stdio.h>
int main(){
int base, height;
printf("Triangle Area Calculator!\n");
printf("Enter the size of the base of the triangle: ");
scanf("%d", &base);
printf("Enter the height of the triangle: ");
scanf("%d", &height);
printf("The Area of the Triangle will be %d", (base*height/2));
return 0;
}
