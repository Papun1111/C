#include<stdio.h>
void swap(int* a,int* b){
    int c=*a;
    *a=*b;
    *b=c;
}
int main(){
    int a=5;
    int b=6;
    printf("address before swap\n");
    printf("a=%d b=%d\n address of a=%p address of b=%p\n",a,b,&a,&b);
    swap(&a,&b);
    printf("address after swap\n");
    printf("a=%d b=%d\n address of a=%p address of b=%p",a,b,&a,&b);
    return 0;
}
// address after and before swap are same