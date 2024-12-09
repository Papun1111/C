#include<stdio.h>
int maximum(int a[],int n){
int max=-1;
for(int i=0;i<n;i++){
    if(a[i]>max){
        max=a[i];
    }
}
return max;
}
int minimum(int a[],int n){
    int min=1000000;
for(int i=0;i<n;i++){
    if(a[i]<min){
        min=a[i];
    }
}
return min;
}
int main(){
int arr[100];
printf("ENTER THE SIZE OF THE ARRAY:");
int n;
scanf("%d",&n);
printf("Enter numbers into the arrays ");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int max=maximum(arr,n);
int min=minimum(arr,n);
printf("the minimum is %d and the maximum is %d ",min,max);
    return 0;
}