#include<stdio.h>
void findcommon(int a[],int b[],int r[],int* k){
 *k=0;
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        if(a[i]==b[j]){
            r[(*k)++]=a[i];
        }
    }
}
}
int main(){
    int arr[]={1,2,3,4,5};
    int arr2[]={2,3,6,7,10};
    int res[5];
int k=0;
    findcommon(arr,arr2,res,&k);
for(int i=0;i<k;i++){
    if(res[i]!='\0'){
        printf("%d",res[i]);
    }
}

    return 0;
}