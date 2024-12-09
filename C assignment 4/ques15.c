#include<stdio.h>

int main() {
    int a = 55;
    int b = 105;
    int c = 89;
    int d = 68;
    
  
    int* arr[4];
    
    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;
    arr[3] = &d;
    int maxi=-1111;
    for (int i = 0; i < 4; i++) {
        int val= *(*(arr+i)); 
        if(val>maxi)maxi=val;
    }
printf("maximum is %d ",maxi);
    return 0;
}
