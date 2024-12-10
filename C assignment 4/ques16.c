#include<stdio.h>
int main(){
int a[4];
int* p=a;
printf("Enter 4 elements in the array :");
for(int i=0;i<4;i++){
scanf("%d",p+i);
}
printf("Printed:");
for(int i=0;i<4;i++){
    printf("%d ",*(p+i));
}
    return 0;
}