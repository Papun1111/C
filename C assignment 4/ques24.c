#include<stdio.h>
#include<string.h>
void reverse(char ch[],char* rev){
    char* s=ch+strlen(ch)-1;
    while (ch<=s)
    {
        *rev++=*s--;
    }
    *rev='\0';
}
int main(){
    char ch[]="Papun";
    char rev[strlen(ch)+1];
    reverse(ch,rev);
    printf("%s",rev);
}