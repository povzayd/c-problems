#include <stdio.h>
int main () {
int age;
printf("Check Wheather You Are Eligible To Vote\n");
printf("Enter Your Age :");
scanf("%d", &age);
if (age >=18)
    printf ("You Can Vote ");
else 
    printf ("Sorry, You Can't Vote");
return 0;
 
}