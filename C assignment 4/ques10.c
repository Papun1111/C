#include <stdio.h>

int main() {
    // Initialize the array
    int a[] = {120, 502, 118, 188, 106, 447};
    
    // Declare six pointers and assign them to different array elements
    int* ptr1 = &a[0];   // points to a[0]
    int* ptr2 = &a[1];   // points to a[1]
    int* ptr3 = &a[2];   // points to a[2]
    int* ptr4 = &a[3];   // points to a[3]
    int* ptr5 = &a[4];   // points to a[4]
    int* ptr6 = &a[5];   // points to a[5]
    
    // Print the values pointed to by the pointers
    printf("Value pointed by ptr1: %d\n", *ptr1);
    printf("Value pointed by ptr2: %d\n", *ptr2);
    printf("Value pointed by ptr3: %d\n", *ptr3);
    printf("Value pointed by ptr4: %d\n", *ptr4);
    printf("Value pointed by ptr5: %d\n", *ptr5);
    printf("Value pointed by ptr6: %d\n", *ptr6);

    return 0;
}
