#include<stdio.h>
int main() {
  int n,i,sum=0;
int arr[50];
printf("Enter array size: ");
scanf("%d",&n);

printf("enter array elements\n");
for(i=0;i<n;i++) {
scanf("%d",&arr[i]);
}
printf("array elements are:\n");
for(i=0;i<n;i++) {
printf("%d\n",arr[i]);
}
for(i=0;i<n;i++) {
sum=sum+arr[i];
}
printf("sum of array elements=%d\n",sum);
}
