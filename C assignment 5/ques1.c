#include<stdio.h>
int main(){
int arr[4][5],i,j;
for(i=0;i<4;i++){
for(j=0;j<5;j++){
arr[i][j]=10*i+j;
}}
printf("%d\n",arr[2][4]);
printf("%d\n",*(*(arr+2)+4));
return 0;}
// arr[2][4] directly accesses the element at the 3rd row (index 2) and the 5th column (index 4), which is 24.
// *(*(arr+2)+4) is another way of accessing the same element using pointer arithmetic. arr+2 moves the pointer to the start of the 3rd row, and +4 moves the pointer four elements to the right in that row, landing on the same element 24.
// Row 0:  0,  1,  2,  3,  4
// Row 1: 10, 11, 12, 13, 14
// Row 2: 20, 21, 22, 23, 24
// Row 3: 30, 31, 32, 33, 34
//24 ans