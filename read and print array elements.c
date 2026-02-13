#include<stdio.h>
int main() {
  int arr[50];
int n,i;
printf("Enter number of elements:");
scanf("%d",n);
printf("Enter Array elements:");
for(i=0;i<n;i++) {
scanf("%d",&arr[i]);
}
printf("Entered Array Elements are:");
for (i=0;i<n;i++) {
printf("%d",arr[i]);
}
return 0;
}
