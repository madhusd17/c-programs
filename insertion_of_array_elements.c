#include<stdio.h>
int main() {
int i,pos,num,size;
int a[5];
printf("Enter size of array: ");
scanf("%d",&size);
printf("Enter array elements\n");
for(i=0;i<size;i++) {
scanf("%d",&a[i]);
}
printf("Enter position: ");
scanf("%d",&pos);
printf("Enter number: ");
scanf("%d",&num);
if(pos<=0||pos>size) {
return 0;
}
else {
for(i=size;i>pos-1;i--) {
a[i]=a[i-1];
}

a[pos-1]=num;
size++;
}
for(i=0;i<size;i++) {
printf("%d\n",a[i]);
}
}
