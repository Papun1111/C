#include<stdio.h>

int main(){
    int a[] = {1, 3, 2, 5, 6, 7, 12, 10}; 
    int l = sizeof(a) / sizeof(a[0]);


    for(int i = 0; i < l; i++){
        for(int j = 0; j < l - i - 1; j++){
            if(a[j] > a[j + 1]){
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }


    for(int i = 0; i < l; i++){
        printf("%d ", a[i]);
    }
    
    return 0;
}
