#include <stdio.h>
int main(){
char gender;
char male;
printf("Please enter your gender[M or F]: ");
scanf(" %c", &gender);
//male = 'M' && 'm';
gender == 'M' ? printf("MALE"): printf("FEMALE"); 
//printf("Your gender is: %c", gender);
return 0;
}
