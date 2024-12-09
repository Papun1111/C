#include<stdio.h>

int main(){
    int a = 52;
    int b = 18;
    int* pa = &a;
    int* pb = &b;

    if (*pa > *pb) {
        printf("%d is greater\n", *pa);  
    } else {
        printf("%d is greater\n", *pb);  
    }

    return 0;
}
