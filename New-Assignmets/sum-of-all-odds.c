#include <stdio.h>
int main(){
int num, sum = 0;
printf("Sum Of All Odd's till \"N\"\n");
printf("Enter a Number: ");
scanf("%d", &num);
for(int i = 1; i <= num; i += 2){
sum = sum + i;
}
printf("Sum of all odd's till %d = %d", num, sum);
return 0;
}
