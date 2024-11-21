#include<stdio.h>

int binarysearch(int a[], int size, int key){
    int i = 0;
    int j = size - 1;
    while(i <= j){
        int mid = i + (j - i) / 2;
        if(a[mid] == key){
            return 1; 
        }
        if(key < a[mid]){
            j = mid - 1;
        }else{
            i = mid + 1;
        }
    }
    return 0; 
}

int main(){
    int a[10];
    printf("Enter elements into the array:\n");
    for(int i = 0; i < 10; i++){
        scanf("%d", &a[i]);
    }
    int key;
    printf("Enter the key you want to search: ");
    scanf("%d", &key);
    int exist = binarysearch(a, 10, key); 
    if(exist){
        printf("Key found\n");
    }else{
        printf("Key not found\n");
    }
    return 0;
}
