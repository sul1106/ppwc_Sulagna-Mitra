 /*The bubble sort is another technique for sorting an array. A bubble sort compares adjacent array
 elements and exchanges their values if they are out of order. In this way, the smaller values ”bubble“
 to the top of the array (toward element 0), while the larger values sink to the bottom of the array. After
 the first pass of a bubble sort, the last array element is in the correct position; after the second pass
 the last two elements are correct, and so on. Thus, after each pass, the unsorted portion of the array
 contains one less element. Write and test a function that implements this sorting method*/
 #include <stdio.h>
#include <stdlib.h>

void bubble_sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    bubble_sort(arr, size);
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
/*Output:
Original array: 64 34 25 12 22 11 90 
Sorted array: 11 12 22 25 34 64 90 */
