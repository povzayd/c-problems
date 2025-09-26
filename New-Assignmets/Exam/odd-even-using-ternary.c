#include <stdio.h>
int main(){
int x;
printf("ODD OR EVEN USING TERNARY OPERATER.\n");
printf("Enter The Number: ");
scanf("%d", &x);
(x%2==1) ? printf("%d is ODD.", x) : printf("%d is EVEN.", x) ; 
return 0;
}
