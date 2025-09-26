#include <stdio.h>

int main(){
int marks;
printf("Enter Your Marks: ");
scanf("%d", &marks);
(marks >= 80) ? printf("HIGH") : (marks >= 50 ? printf("MODERATE") : printf("LOW"));
return 0;
}

