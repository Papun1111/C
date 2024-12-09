#include<stdio.h>
typedef struct ques5
{
   int a;
   int b;
   int c; 
}ques5;
void increment(ques5* p){
    p->a=(p->a)+10;
    p->b=(p->b)+10;
    p->c=(p->c)+10;
}
int main(){

ques5 x={12,25,18};
ques5* p=&x;
increment(p);
printf("a=%d b=%d c=%d",p->a,p->b,p->c);
    return 0;
}