#include<stdio.h>
void reverse(int a[],int* rev,int l){
    int *ptr=a+l-1;
    while(ptr>=a){
        *rev=*ptr;
        rev++;
        ptr--;
    }
}
int main(){
int a[]={1,2,3,4,5,6,7,8,9,10};
int l=sizeof(a)/sizeof(a[0]);
int rev[l];
reverse(a,rev,l);
for(int i=0;i<l;i++){
    printf("%d ",rev[i]);
}
    return 0;
}