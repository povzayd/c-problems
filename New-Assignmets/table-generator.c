#include <stdio.h>
int main(){
int num;
printf("Table Generator\n");
printf("Enter a Number: ");
scanf("%d", &num);
for(int i =1; i <= 10; i++){
printf("%d x %d = %d\n", num, i, (num * i));
}
return 0;
}

