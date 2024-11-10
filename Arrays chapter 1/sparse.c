#include<stdio.h>
int isSparse(int arr[][3]){
int zc=0;
for(int i=0;i<3;i++){
for (int j=0;j<3;j++){
if(arr[i][j]==0)zc++;
  }
}
int tot=3*3;
if(zc>(tot/2)){
    return 1;
}
return 0;
}
int main(){
    int arr[][3]={{1,2,3},{0,0,0},{0,0,0}};
    if(isSparse(arr)){
        printf("The matrix is sparse");
    }else{
        printf("The matrix is not sparse");
    }


    return 0;
}