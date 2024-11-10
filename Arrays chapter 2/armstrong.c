#include<stdio.h>
int isarmstrong(int n){
int sum=0;
int d=0;
int a=n;
while(a>0){
    int d=a%10;
    sum+=d*d*d;
    a/=10;
}
if(sum==n)return 1;
return 0;
}
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if(isarmstrong(n)){
        printf("The number is armstrong");
    }else{
        printf("the number is not armstrong");
    }
    return 0;
}