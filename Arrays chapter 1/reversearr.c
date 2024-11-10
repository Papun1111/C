#include <stdio.h>

void reverse(int arr[], int c) {
    int i = 0, j = c - 1;
    while (i < j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

int main() {
    int r, c;

    printf("Enter rows and columns of the matrix: ");
    scanf("%d%d", &r, &c);

    int a[r][c];

    printf("Enter elements into the matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < r; i++) {
        reverse(a[i], c);
    }

    printf("Reversed matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
