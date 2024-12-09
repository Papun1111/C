#include<stdio.h>
int main(){
int a[]={10,13,20,33,44};
float b[]={10.2,13.2,20.0,33.0,44.0};
for(int i=0;i<10;i++){
printf("element=%d in array a its address=%u\n",*(a+i),a+i);
printf("element=%f in array b its address=%u\n",*(b+i),b+i);
}
    return 0;
}