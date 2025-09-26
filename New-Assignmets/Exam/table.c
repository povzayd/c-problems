#include <stdio.h>
int main(){
int num;
printf("===TABLE === GENERATOR===\n");
printf("Enter a Number: ");
scanf("%d", &num);
int i =1;
while(i <= 10){
printf("%d X %d = %d\n", num, i, (num * i));
i++;
}
return 0;
}

