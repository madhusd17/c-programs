#include<stdio.h>
int main() {
  int i,n,flag=1;
printf("Enter a number: ");
scanf("%d",&n);
if(n<=1) 
flag=0;
else {
for(i=2;i<=n/2;i++) {
if(n%i==0) { 
flag=0;
}
}
}
if(flag==0) {
printf("the number is not prime\n");
}
else {
printf("the number is prime\n");
}
}
