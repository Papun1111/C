#include<stdio.h>
int exists(int a,int r[],int* k){
    for(int i=0;i<(*k);i++){
        if(a==r[i]){
            return 1;
        }
    }
    return 0;       
}
void unique(int a[],int r[],int* k){
for(int i=0;i<8;i++){
    if(!exists(a[i],r,k)){
r[(*k)++]=a[i];
    }
}
}
int main(){
int arr[]={1,2,3,3,4,4,4,6};
int res[8];
int k=0;
unique(arr,res,&k);
for(int i=0;i<k;i++){
    printf("%d",res[i]);
}
    return 0;
}