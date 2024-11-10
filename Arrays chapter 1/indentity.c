#include<stdio.h>
int isidentity(int arr[][3]){
    int zeroCount=0;
    for(int i=0;i<3;i++){
       if(arr[i][i]!=1){
            return 0;
       }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==0)zeroCount++;
        }
    }
    int tot=3*3;
    int zcs=tot-3;
    if(zeroCount==zcs)return 1;
    return 0;
}
int main(){
int arr[][3]={{1,0,0},{0,1,0},{0,0,1}};
int a=isidentity(arr);
if(a){
    printf("it is identity");
}else{
    printf("Tujhe toh pata hee hoga ye identity nahi hai");
}

    return 0;
}