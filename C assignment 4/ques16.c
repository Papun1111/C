#include <stdio.h>
int main() {
    int a[] = {1, 2, 3, 4};
    int b[] = {5, 6, 7, 8};
    int c[] = {9, 10, 11, 12};
    int d[] = {13, 14, 15, 16};
    int sumarray[4];
    int *ptr_a = a, *ptr_b = b, *ptr_c = c, *ptr_d = d;
    for (int i = 0; i < 4; i++) {
        sumarray[i] = *(ptr_a + i) + *(ptr_b + i) + *(ptr_c + i) + *(ptr_d + i);
    }

    printf("Sum array: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", sumarray[i]);
    }

    return 0;
}
