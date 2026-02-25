#include<stdio.h>
int main() {
int n,i,sum=0;
printf("enter the value of n :");
scanf("%d",&n);
for(i=0;i<=n;i++) {
sum=sum+i;
}
printf("the sum of %d numbers is %d\n",n,sum);
}
