#include <stdio.h>
int main(){
int num, sum=0;
printf("A PROGRAM TO PRINT SUM OF ALL ODDS TILL N\n");
printf("Enter The Number: ");
scanf("%d", &num);
int i =1;
while(i <= num){
sum+=i;
i=i+2;
}
printf("%d", sum);
}
