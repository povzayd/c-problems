#include <stdio.h>
int main()
{
int num;
l:
printf("Enter a number between 1-10: ");
scanf("%d", &num);
if (num !=5){
goto l;
}
else{
printf("Congratulations!! You Have Won The Game.");
}
return 0;
}

