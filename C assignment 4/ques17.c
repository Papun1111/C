#include <stdio.h>
#include <ctype.h>

int main() {
    char *args[] = {
        "hello", "world", "this", "is", "a", "test", NULL
    };
    char **ptr = args;
    while (*ptr != NULL) {
        char *str = *ptr;
        
        while (*str != '\0') {
            *str = toupper((unsigned char)*str);
            str++;
        }

        ptr++;
    }

    ptr = args;
    while (*ptr != NULL) {
        printf("%s ", *ptr);
        ptr++;
    }

    return 0;
}
