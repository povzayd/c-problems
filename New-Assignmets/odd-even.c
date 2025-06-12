#include <stdio.h>
int main () {
int number,check;
printf("Check Wheather A No. is Odd Or Even\n");
printf("Enter A No. :");
scanf("%d", &number);
check = (number % 2);
if (check !=0)
    printf ("The Given No. Is ODD");
else 
    printf ("The Given No. Is EVEN");
return 0;
 
}