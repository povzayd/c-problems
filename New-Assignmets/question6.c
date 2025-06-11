#include <stdio.h>
int main(){
char f_name[50], m_name[50], l_name[50];
int age;
printf("BIO-DATA ANALYSER\n");
printf("Enter your first name: ");
scanf("%49s", &f_name);
printf("Enter your middle name: ");
scanf("%49s", &m_name);
printf("Enter your last name: ");
scanf("%49s", &l_name);
printf("Enter your Age: ");
scanf("%d", &age);
printf("Hello %49s %49s %49s , Welcome to our program.\n", f_name, m_name, l_name);
printf("The age provided by you is %d.", age);
return 0;



}
