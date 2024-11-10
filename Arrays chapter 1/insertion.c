#include<stdio.h>
void printarr(int arr[],int n){
     for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
    }
}
void insertat(int arr[],int* n,int idx,int ele){
for(int i=*(n)-1;i>=idx;i--){
    arr[i+1]=arr[i];
}
*n=*n+1;
arr[idx]=ele;
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
    printf("enter the index and the element to be inserted");
    int idx,ele;
    scanf("%d%d",&idx,&ele);
    insertat(arr,&n,idx,ele);
    printarr(arr,n);
    return 0;
}