#include<stdio.h>
int maximum(int *ptr,int l){
int max=-111111;
for(int i=0;i<l;i++){
    int ele=*(ptr+i);
    if(ele>max){
        max=ele;
    }
}
return max;
}
int main(){
int a[]={1,2,3,4,5,6,10,12,11,4,32};
int l=sizeof(a)/sizeof(a[0]);
int max=maximum(a,l);
printf("%d",max);
    return 0;
}