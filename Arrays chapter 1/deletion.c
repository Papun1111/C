#include<stdio.h>
void printarr(int arr[],int n){
     for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
    }
}
void deleteatindex(int arr[],int n,int idx){
for(int i=idx;i<n;i++){
    arr[i]=arr[i+1];
}
}
int main(){
      int arr[100];
    int n;
    printf("enter size of the arrays ");
    scanf("%d",&n);
    printf("enter elements into the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printarr(arr,n);
    printf("enter the index to be deleted from");
    int idx;
    scanf("%d",&idx);
    deleteatindex(arr,n,idx);
    n-=1;
     printarr(arr,n);
    return 0;
}