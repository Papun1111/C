#include<stdio.h>
void transpose(int a[][3]){
    int (*p)[3]=a;
    for(int i=0;i<3;i++){
        for(int j=i;j<3;j++){
int temp=*(*(p+i)+j);
*(*(p+i)+j)=*(*(p+j)+i);
*(*(p+j)+i)=temp;
        }
    }
}
int main(){
int a[][3]={{1,2,3},{4,5,6},{7,8,9}};
transpose(a); 
    int (*p)[3]=a;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d",(*(*(p+i)+j)));
    }
      printf("\n");

}
    return 0;
}