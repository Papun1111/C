#include<stdio.h>
int main(){
int a[4][5]={
{1,2,3,4,5},
{6,7,8,9,10},
{11,12,13,14,15},
{16,17,18,19,20}};
printf("%d\n",*(*(a+**a+2)+3));
return 0;}
// **a is the dereferencing of the pointer to the first element of the array. Since a is equivalent to &a[0][0], dereferencing it once (*a) gives the address of the first row (a[0]), and dereferencing it again (**a) gives the value of the first element of the first row, which is 1.
// a + **a + 2 translates to a + 1 + 2 because **a is 1. This expression hence simplifies to a + 3, which is the address of the fourth row (a[3]).
// *(a + 3) is equivalent to a[3], which is the pointer to the fourth row of the array.
// Finally, *(a + 3) + 3 points to the fourth element of the fourth row, which is 19. Thus, *(*(a + 3) + 3) dereferences to the value 19
//ans =19