#include <stdio.h>
int main(){
int x;
printf("ABSOLUTE VALUE USING TERNARY.\n");
printf("Enter The Number: ");
scanf("%d", &x);
(x > 0) ? printf("Absolute value is %d.", x) : printf("Absolute value is %d.", ((-1)*x)) ; 
return 0;
}
