#include <stdio.h>

void sum_and_avg(double num1, double num2, double num3, double *sum, double *avg) {
    *sum = num1 + num2 + num3;       
    *avg = *sum / 3;                   

int main() {
    double num1 = 5.0, num2 = 10.0, num3 = 15.0;
    double sum, avg;
    
    sum_and_avg(num1, num2, num3, &sum, &avg);
    
    printf("Sum: %.2f\n", sum);
    printf("Average: %.2f\n", avg);

    return 0;
}
//just use the prototype for this question this is the whole program