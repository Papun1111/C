#include<stdio.h>
int reverse(int n){
    int r=0;
    int a=n;
    while(a>0){
        int d=a%10;
        r=r*10+d;
        a/=10;
    }
 
    return r;
}
int palindrome(int n,int r){
if(n==r)return 1;
return 0;
}
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int r=reverse(n);
    if(palindrome(n,r)){
        printf("True");
    }else{
        printf("False");
    }
    return 0;
}