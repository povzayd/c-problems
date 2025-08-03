#include <stdio.h>
int main(){
int num = 0;
while(num != 10){
printf("Enter a number: ");
scanf("%d", &num);
if(num != 10){printf("Wrong Number.Try Again!\n");
}}
printf("You Win!");
return 0;}
