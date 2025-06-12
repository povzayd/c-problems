#include <stdio.h>
int main(){
int age;
char nation;
printf("LICENCE CHECKER\n");
printf("Enter your age: ");
scanf("%d", &age);
printf("Are You Indian?[Y or N]: ");
scanf(" %c", &nation);
if ((nation == 'Y' || nation == 'y') && age >= 18){
printf("You are Eligible for licence.");
}
else {
printf("Sorry You aren't eligible.");
}
return 0;
}
