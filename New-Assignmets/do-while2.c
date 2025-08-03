#include <stdio.h>
int main(){
int num;
do{
printf("Enter a Number: ");
scanf("%d", &num);
printf("%d\n", num);
if( num != 10){
printf("Try Again!\n");
}
}
while(num != 10);
printf("You Win!");

return 0;
}
