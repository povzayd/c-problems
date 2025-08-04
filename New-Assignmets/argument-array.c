#include <stdio.h>
void print_marks(int marks[],int num){
for(int i = 0; i < num; i++){
printf("Marks of the student %d will be: %d", i+1, marks[i]);
}
}
int main(){
int marks[10];
int num = 10;
for(int i = 0; i < num; i++){
printf("Enter the marks for %dst student: ", i+1);
scanf("%d", &marks[i]);
}
}
