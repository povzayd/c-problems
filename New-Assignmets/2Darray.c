#include <stdio.h>
int main(){
int roll[5]={1,2,3,4,5};
char name[5][20]={"jane","maxx","june","rose","adil"};
float marks[5]={45.6,45.9,42.6,41.8,78.81};
for(int i = 0; i < 5; i++){
printf("STUDENT NAME:%s, ROLL NO.:%d, MARKS:%.2f\n", name[i], roll[i], marks[i]);
}
return 0;
}
