/*Q2.Design a function with prototype;
 void sumarr(int a[], int b[], int r[], int size);thattakes4parameters,two
 int arrays as input arguments, 1 array as output arguments and their effective size respectively to pro
duce a resultant array containing the sums of corresponding array elements a and b. For example, for
 the three-element input arrays 5-1 7 and 2 4-2 , the result would be an array containing 7 3 5 .*/


 #include <stdio.h>
#include <stdlib.h>
void sumarr(int a[], int b[], int r[], int size);
void sumarr(int a[], int b[], int r[], int size) {
    for (int i = 0; i < size; i++) {
        r[i] = a[i] + b[i];
    }
}

int main() {
    int a[] = {5, -1, 7};
    int b[] = {2, 4, -2};
    int size = sizeof(a) / sizeof(a[0]);
    int *r = (int *)malloc(size * sizeof(int));
    if (r == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    sumarr(a, b, r, size);
    printf("Resultant array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", r[i]);
    }
    printf("\n");

    free(r);
    return 0;
}

/*
Output:
Resultant array: 7 3 5 
*/
