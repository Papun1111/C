#include <stdio.h>
#include <string.h>

void reverse(const char *str, char *rev) {
    const char *end = str + strlen(str) - 1;
    while (end >= str) {
        *rev++ = *end--;
    }
    *rev = '\0';
}

int main() {
    char *str = "papun";
    char rev[100];
    reverse(str, rev);
    printf("%s", rev);
    return 0;
}
