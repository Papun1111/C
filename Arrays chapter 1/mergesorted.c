#include<stdio.h>

void merge(int a[], int b[], int n, int m, int res[]) {
    int i = 0, j = 0, k = 0;

    while(i < n && j < m) {
        if(a[i] < b[j]) {
            res[k++] = a[i++];
        } else {
            res[k++] = b[j++];
        }
    }

    while(i < n) {
        res[k++] = a[i++];
    }

    while(j < m) {
        res[k++] = b[j++];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int arr2[] = {7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
    int mergeList[m + n];

    merge(arr, arr2, n, m, mergeList);

    for (int i = 0; i < n + m; i++) {
        printf("%d ", mergeList[i]);
    }
    printf("\n");

    return 0;
}
