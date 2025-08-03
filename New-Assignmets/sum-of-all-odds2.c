#include <stdio.h>
int main(){
int num, k, sum;
printf("ODD NUMBER SUM CALCULATOR\n");
printf("Enter a number:");
scanf("%d", &num);
k = (num + 1)/2 ;
sum = k*k;
printf("Sum of all odds till %d is %d", num, sum);
return 0;
}
