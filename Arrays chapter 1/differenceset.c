#include <stdio.h>

void difference(int a[], int b[], int r[], int *k) {
    for (int i = 0; i < 6; i++) {
        int found = 0;
      
        for (int j = 0; j < 3; j++) {
            if (a[i] == b[j]) {
                found = 1;
                break;
            }
        }
      
        if (!found) {
          
                r[*k] = a[i];
                (*k)++;
            
        }
    }
}

int main() {
    int a[] = {1, 2, 3, 4, 5, 6};
    int b[] = {2, 4, 6};
    int res[6];
    int k = 0;
    
    difference(a, b, res, &k);
    

    for (int i = 0; i < k; i++) {
        printf("%d ", res[i]);
    }
    
    return 0;
}
