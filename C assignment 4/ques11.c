#include<stdio.h>
int main(){
int a[]={120,502,118,188,106,447};
int* p=&a[0];
for(int i=0;i<6;i++)
{
    printf("%d ",*(p+i));
}
    return 0;
}