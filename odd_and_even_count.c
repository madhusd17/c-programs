#include<stdio.h>
int main() {
int n,i,odd=0,even=0;
int arr[50];
printf("enter size of array : ");
scanf("%d",&n);
printf("enter array elements:\n");
for(i=0;i<n;i++) {
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++) {
if(arr[i]%2==0) {
even++;
}
else {
odd++;
}

}
printf("odd count=%d\n",odd);
printf("even count=%d\n",even);
}
