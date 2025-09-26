#include <stdio.h>
int main(){
int x,y;
printf("BIGGER OR SMALLER USING TERNARY OPERATER.\n");
printf("Enter The First Number: ");
scanf("%d", &x);
printf("Now, Enter The Second Number: ");
scanf("%d", &y);
x > y ? printf("%d is bigger then %d", x,y) : printf("%d is bigger then %d", y,x) ; 
return 0;
}
