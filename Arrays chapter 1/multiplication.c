#include <stdio.h>

void multiply(int r, int c, int m, int n, int a[][c], int b[][n], int arr[][n]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = 0;
            for (int k = 0; k < c; k++) {
                arr[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    int r, c, m, n;

    printf("Enter rows and columns of the first matrix: ");
    scanf("%d%d", &r, &c);

    int a[r][c];
    printf("Enter elements into the first matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter rows and columns of the second matrix: ");
    scanf("%d%d", &m, &n);

    int b[m][n];
    printf("Enter elements into the second matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    if (c == m) {
        int newArr[r][n];
        multiply(r, c, m, n, a, b, newArr);

        printf("\nResult of matrix multiplication:\n");
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d ", newArr[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("These matrices cannot be multiplied.\n");
    }

    return 0;
}
