#include <stdio.h>

void upper(char ch[]) {
    int i = 0;
    for (i = 0; ch[i] != '\0'; i++) {
        if(ch[i] >= 'a' && ch[i] <= 'z') {
            ch[i] = ch[i] - 32;  
        }
    }
}

int main() {
    char args[][10] = {
        "hello", "world", "this", "is", "a", "test"
    };

    for (int i = 0; i < 6; i++) {
        upper(args[i]);
        printf("%s ", args[i]);
    }

    return 0;
}
