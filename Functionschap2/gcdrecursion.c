#include <stdio.h>

int gcd(int x, int y) {
   
    if (y == 0) {
        return x;
    }
   
    return gcd(y, x % y);
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    int a = gcd(x, y);
    printf("GCD of %d and %d is %d\n", x, y, a);
    
    return 0;
}
