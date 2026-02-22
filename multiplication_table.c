#include<stdio.h>
int main() {
int n,i;
printf("enter number: ");
scanf("%d",&n);
printf("Multiplication table for %d is\n",n);
for(i=1;i<11;i++) {
printf("%d * %d = %d\n",n,i,n*i);
}
}
