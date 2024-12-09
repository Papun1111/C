#include<stdio.h>
#include<string.h>

void frequencyArr(char str[], int l, int farr[]) {
    for (int i = 0; i < 256; i++) { 
        farr[i] = 0;
    }


    for (int i = 0; i < l; i++) {
        char ch = str[i];
        int a = (int)ch;
        farr[a]++;
    }
}

void printfrequencyArr(char str[], int l, int farr[]) {
    printf("\nCharacter frequencies:\n");
    for (int i = 0; i < l; i++) {
        char ch = str[i];
        int a = (int)ch;

 
        if (farr[a] != 0) {
            printf("Frequency of '%c' is %d\n", ch, farr[a]);
            farr[a] = 0; 
    }
}
}
int main() {
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);  
    int l = strlen(str);
    int farr[256]; 

    frequencyArr(str, l, farr);
    printfrequencyArr(str, l, farr);

    return 0;
}
