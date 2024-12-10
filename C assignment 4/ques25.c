#include<stdio.h>
int main(){
int a[10];
int l=sizeof(a)/sizeof(a[0]);
printf("Enter numbers");
for(int i=0;i<l;i++){
    scanf("%d",a+i);
}
int max=-1;
for(int i=0;i<l;i++){
    int val=*(a+i);
    if(val>max){
        max=val;
    }
}
printf("max in array is %d ",max);
}