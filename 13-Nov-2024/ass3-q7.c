/*Q7.Write a program to copy the distinct elements of an int type array to another int type array. For
 example, if the input array is 4 7 7 3 2 5 5 then the output array will be 4 7 3 2 5.*/

#include <stdio.h>
void copy_distinct_elements(int input[], int size, int output[], int *output_size) {
    int found;
    *output_size = 0;

    for (int i = 0; i < size; i++) {
        found = 0;
        for (int j = 0; j < *output_size; j++) {
            if (input[i] == output[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            output[*output_size] = input[i];
            (*output_size)++;
        }
    }
}

int main() {
    int input[] = {4, 7, 7, 3, 2, 5, 5};
    int size = sizeof(input) / sizeof(input[0]);
    int *output = (int *)malloc(size * sizeof(int));
    int output_size;
    copy_distinct_elements(input, size, output, &output_size);
    printf("Output array with distinct elements: ");
    for (int i = 0; i < output_size; i++) {
        printf("%d ", output[i]);
    }
    printf("\n");
    free(output);

    return 0;
}
/*
Output:
Output array with distinct elements: 4 7 3 2 5 
*/