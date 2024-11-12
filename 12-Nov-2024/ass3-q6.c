/* Q6.Design a program to find the difference between two sets or arrays. The difference between two sets
 or arrays: All the elements of the first array that don’t appear in the second array. If array p has
 the elements 1, 2, 3, 4 and array q has the elements 2, 4, 5, 6 , then the difference between the
 two arrays, p-q will be 1, 3 */

 #include <stdio.h>
 #include <stdlib.h>
void difference(int p[], int size_p, int q[], int size_q, int result[], int *size_r) {
    int found;
    *size_r = 0;

    for (int i = 0; i < size_p; i++) {
        found = 0;
        for (int j = 0; j < size_q; j++) {
            if (p[i] == q[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            result[*size_r] = p[i];
            (*size_r)++;
        }
    }
}

int main() {
    int p[] = {1, 2, 3, 4};
    int q[] = {2, 4, 5, 6};
    int size_p = sizeof(p) / sizeof(p[0]);
    int size_q = sizeof(q) / sizeof(q[0]);
    int *result = (int *)malloc(size_p * sizeof(int));
    int size_r;
    difference(p, size_p, q, size_q, result, &size_r);
    printf("Difference (p - q): ");
    for (int i = 0; i < size_r; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    free(result);
    return 0;
}

/*
Output:
Difference (p - q): 1 3 
*/