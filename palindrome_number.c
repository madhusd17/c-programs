#include<stdio.h>
int main() {
  int remainder,num,reversed=0,original;
printf("Enter number:");
scanf("%d",&num);

original=num;
while(num!=0) {
remainder=num%10;
reversed=reversed*10+remainder;
  num=num/10;
}
if(reversed==original) {
  printf("Entered number is palindrome\n");
}
else {
printf("entered number is not palindrome\n");
}
return 0;
}
  
