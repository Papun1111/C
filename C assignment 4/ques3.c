#include<stdio.h>
typedef struct ques3
{
   float x ;
float y;
float z;
}ques3;


int main(){
ques3 a={6.7,1.2,2.3};
ques3* p=&a;
printf("x=%f y=%f z=%f",p->x,p->z,p->z);
    return 0;
}