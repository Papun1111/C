#include<stdio.h>

void conquer(int a[], int i, int mid, int j) {
    int temp[j - i + 1];
    int idx = 0;
    int left = i;
    int right = mid + 1;

    while (left <= mid && right <= j) {
        if (a[left] <= a[right]) {
            temp[idx++] = a[left++];
        } else {
            temp[idx++] = a[right++];
        }
    }

    while (left <= mid) {
        temp[idx++] = a[left++];
    }

    while (right <= j) {
        temp[idx++] = a[right++];
    }

    for (int k = 0; k < idx; k++) {
        a[i + k] = temp[k];
    }
}

void mergesort(int a[], int i, int j) {
    if (i >= j) return;
    int mid = i + (j - i) / 2;
    mergesort(a, i, mid);
    mergesort(a, mid + 1, j);
    conquer(a, i, mid, j);
}

int main() {
    int a[] = {1, 3, 2, 5, 6, 8, 7, 4, 9, 10};
    int l = sizeof(a) / sizeof(a[0]);

    mergesort(a, 0, l - 1);

    for (int i = 0; i < l; i++) {
        printf("%d ", a[i]);
    }
    
    return 0;
}
