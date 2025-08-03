#include <stdio.h>
int main(){
int num;
do{
printf("Enter A Positive Number: ");
scanf("%d", &num);
if(num > 0)
{
printf("You Win!\n");}
else{
printf("Try Again!\n");
}
}
while(num < 0);
//printf("Try Again!\n");
return 0;
}
