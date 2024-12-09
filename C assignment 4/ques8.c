#include<stdio.h>
int main(){
int a[]={10,20,30,40,50,60,70,80,90,100};
for(int i=0;i<10;i++){
printf("element=%d its address=%u\n",a[i],a+i);
}
    return 0;
}
//the memory location is contiguous with a difference of 4 byte in each iteration