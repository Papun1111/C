#include <stdio.h>

void selectionSort(int arr[], int l) {
    for (int i = 0; i < l - 1; i++) {
        int s = i;
        for (int j = i + 1; j < l; j++) {
            if (arr[s] > arr[j]) {
                s = j;
            }
        }
        int temp = arr[s];
        arr[s] = arr[i];
        arr[i] = temp;
    }
}

void printArr(int arr[], int l) {
    for (int i = 0; i < l; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 4, 2, 3, 5, 6, 9, 10};
    int l = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, l);
    printArr(arr, l);
    return 0;
}
