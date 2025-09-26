#include <stdio.h>
int main(){
int num;
printf("SUM OF INDIVIDUAL DIGITS!!\n");
printf("ENTER A NUMBER: ");
scanf("%d", &num);
int sum = 0;
while(num > 0){
sum += num % 10;
num = num / 10;
}
printf("THE SUM OF THE DIGITS OF %d WILL BE %d", num, sum);
return 0;
}
