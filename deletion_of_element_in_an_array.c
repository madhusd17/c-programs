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
if(pos<=0||pos>size) {
return 0;
}
else {
for(i=pos-1;i<size;i++) {
a[i]=a[i+1];
}


size--;
}
for(i=0;i<size;i++) {
printf("%d\n",a[i]);
}
}
