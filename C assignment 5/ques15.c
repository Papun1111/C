#include<stdio.h>
int main()
{
    int *ptr;
ptr=(int *)calloc(1,sizeof(int));
*ptr=100;
printf("%d\n",*ptr);
free(ptr);
ptr=NULL;
printf("%p\n",ptr);
return 0;
}
//100
//00000000
//y