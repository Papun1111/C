#include<stdio.h>

typedef struct ques1 {
    int Ia;
    float Fb;
    char Chrvar;
} ques1;  // This defines 'ques1' as the type name

int main() {
    // Create and initialize a structure variable of type 'ques1'
    ques1 a = {345, 4.5, 'Z'};

    // Optionally, print the values to verify the initialization
    printf("Ia: %d location=%p\n", a.Ia,&a.Ia);
    printf("Fb: %.2f location=%p\n", a.Fb,&a.Fb);
    printf("Chrvar: %c location=%p\n", a.Chrvar,&a.Chrvar);

    return 0;
}