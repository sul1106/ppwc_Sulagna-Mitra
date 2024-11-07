/*Q9.Write a program that accepts x as an input through the keyboard and calculates the sum of first nine
 terms of this series*/
#include <stdio.h>
#include <math.h>

int main() {
    double x, term, sum = 0.0;
    int i;
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    double fraction = (x - 1) / x;
    for (i = 1; i <= 9; i++) { 
        term = (1.0 / i) * pow(fraction, i);
        sum += term;
    }
    printf("Approximation of ln(%lf) using the first nine terms: %lf\n", x, sum);

    return 0;
}
