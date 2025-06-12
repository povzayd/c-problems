#include <stdio.h>
int main(){
int num, nature;
printf("Enter a number :");
scanf("%d", &num);
nature = num % 2;
nature == 0 ? printf("The Given Number %d is Even", num) : printf("The Given Number %d is Odd", num);
return 0;
}

