#include<stdio.h>
#include<string.h>
void uppervow(char str[]){
    int l=strlen(str);
    for(int i=0;i<l;i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            str[i]-=32;
        }
    }
}
int main(){
char str[100];
printf("enter string");
scanf("%s",str);
uppervow(str);
printf("%s",str);
    return 0;
}