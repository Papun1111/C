#include<stdio.h>

// Function prototypes
void arrange(int*, int*);
void printArr(int*, int);

int main() {
    int arr[] = {1, 3, 2, 5, 7, 6, 4, 8, 9, 10};
    int l = sizeof(arr) / sizeof(arr[0]); 

    
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < l - i - 1; j++) {
            arrange(&arr[j], &arr[j + 1]); 
        }
    }


    printArr(arr, l);

    return 0;
}


void arrange(int* a, int* b) {
    if (*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}


void printArr(int* a, int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", *(a + i));
    }
    printf("\n");
}
