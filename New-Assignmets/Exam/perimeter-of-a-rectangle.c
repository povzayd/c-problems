#include <stdio.h>
int main(){
int len, width;
printf("Perimeter Calculator!\n");
printf("Enter the Lenght: ");
scanf("%d", &len);
printf("Enter the Width: ");
scanf("%d", &width);
printf("The Perimeter Will Be: %d", 2*(len+width));
return 0;
}
