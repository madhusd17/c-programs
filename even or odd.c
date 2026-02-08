#include<stdio.h>
int main() {
  int num;
printf("Enter a number:");
scanf("%d",&num);
if(num%2==0)
  printf("Entered number is EVEN");
else
  printf("Entered number is ODD");
return 0;
}
