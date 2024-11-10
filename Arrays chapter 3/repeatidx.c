#include<stdio.h>
#include<string.h>
int repeatidx(char str[],int l){
int idx=-1;
for(int i=0;i<l;i++){
    for(int j=i+1;j<l;j++){
        if(str[i]==str[j]){
            idx=j;
            return idx;
        }
    }
}
return idx;
}
int main(){
    char str[100];
    printf("enter a string");
    scanf("%s",str);
    int l=strlen(str);
    int idx=repeatidx(str,l);
    printf("the index of first repeatative character %d",idx);

    return 0;
}