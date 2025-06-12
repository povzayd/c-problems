#include <stdio.h>
int main()
{
int num;
printf("Enter a number: ");
scanf("%d", &num);
if (num % 2 == 0){
printf("The Number %d is even", num);
}
else{
printf("The Number %d is odd", num);
}
return 0;
}
