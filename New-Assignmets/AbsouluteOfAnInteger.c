#include <stdio.h>
#include <stdlib.h>
int main()
{
int num;
printf("Enter an integer: ");
scanf("%d", &num);
num >= 0 ? printf("%d",num) : printf("%d",num * -1);
//
//
//
//printf("The absolute value of %d is: %d", num, abs(num));
return 0;
}
