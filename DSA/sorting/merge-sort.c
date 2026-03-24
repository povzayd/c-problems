#include <stdio.h>
#include <stdlib.h>
void ms(int a[], int l, int r){
    if(l>=r) return;
    int m=(l+r)/2,i=l,j=m+1,k=0,*t=malloc((r-l+1)*sizeof(int));
    ms(a,l,m); ms(a,m+1,r);
    while(i<=m && j<=r) t[k++]=a[i]<a[j]?a[i++]:a[j++];
    while(i<=m) t[k++]=a[i++];
    while(j<=r) t[k++]=a[j++];
    for(i=l,k=0;i<=r;) a[i++]=t[k++];
    free(t);
}
int main(){
    int a[]={4,1,3,9,7},n=5;
    ms(a,0,n-1);
    for(int i=0;i<n;i++) printf("%d ",a[i]);
}