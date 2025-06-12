
#include <stdio.h>
int main()
{
int age;
char nation[5];
printf("WELCOME TO LICENCE OFFICE \n PLEASE ENTER YOUR AGE: ");
scanf("%d", &age);
printf("Age Entered By You Is: %d\n", age);
printf("ARE YOU AN INDIAN?[Yes or No]: ");
scanf(" %5s", &nation);
if (nation == 'Yes' || nation == 'yes')
{
if (age >= 18) {
printf("YOU CAN GET A LICENCE.");
}
else {
printf("SORRY!! BETTER LUCK NEXT TIME.");
}
}
else
{
printf("SORRY YOU CAN'T APPLY!");
}
return 0;
}
