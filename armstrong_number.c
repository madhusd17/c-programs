#include<stdio.h>
#include<math.h>
int main() {
int num,temp,digit,count=0;
int sum=0;
printf("Enter the number:");
scanf("%d",&num);
temp=num;
while(temp!=0) {
count++;
temp=temp/10;
}
temp=num;
while(temp!=0) {
digit=temp%10;
sum=sum+pow(digit,count);
temp=temp/10;
}
if(sum==num) {
printf("Entered number is armstrong");
}
else {
printf("Entered number is not armstrong number\n");
}
}
