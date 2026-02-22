#include<stdio.h>
int fib(int);
int main() {
int i,n;
printf("Enter number of terms: ");
scanf("%d",&n);

printf("fibonacci series:\n");
for(i=0;i<n;i++) {
printf("%d \n",fib(i));

}
}
int fib(int n) {
if(n==0) 
return 0;
else if(n==1)
return 1;
else 
return fib(n-1)+fib(n-2);
}
