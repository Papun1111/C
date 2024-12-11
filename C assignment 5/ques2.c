#include<stdio.h>
int main(){
int arr[4][5],i,j;
for(i=0;i<4;i++){
for(j=0;j<5;j++){
arr[i][j]=10*i+j;
}}
printf("%d\n",*(arr[1]+9));
return 0;}
// The expression arr[1] gives the address of the beginning of the second row (i.e., the address where 10 is stored).
// Adding 9 to arr[1] (arr[1] + 9) effectively moves the pointer 9 elements forward from the start of the second row.
// Row 0:  0,  1,  2,  3,  4
// Row 1: 10, 11, 12, 13, 14
// Row 2: 20, 21, 22, 23, 24
// Row 3: 30, 31, 32, 33, 34
//11 ans