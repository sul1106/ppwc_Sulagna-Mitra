/*You have two independent sorted arrays of size m, and n respectively, where mn > 0. You are
 required to merge the two arrays such that the merged array will be in sorted form and will contain
 exactly m+n number of elements. You are not allowed to use any kind of sorting algorithm. Design
 your program to meet the above given requirement.
 Example 1 :
 First array:
 12 20 24 32
 Second array:
 7 8 65 105
 The merged sorted array:
 7 8 12 20 24 32 65 105
 Example 2 :
 First array:
 12 20 24
 Second array:
 7 8 65 105
 The merged sorted array:
 7 8 12 20 24 65 105
 Example 3 :
 First array :
 12 20 24 100 120 130
 Secondarray:
 17 28 105 110
 The merged sorted array:
 12 17 20 24 100 105 110 120 130
 NOTE:
 Assume the elements of the array are non-negative integers. The elements can be read from the
 keyboard or can be generated randomly
 */
#include <stdio.h>
#include <stdlib.h>
void mergeArrays(int arr1[], int m, int arr2[], int n, int merged[]) {
    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }
    while (i < m) {
        merged[k++] = arr1[i++];
    }
    while (j < n) {
        merged[k++] = arr2[j++];
    }
}

int main() {
    int m, n, i;
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &m);
    int *arr1 = (int *)malloc(m * sizeof(int));
    printf("Enter the elements of the first sorted array:\n");
    for (i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n);
    int *arr2 = (int *)malloc(n * sizeof(int));
    printf("Enter the elements of the second sorted array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    int *merged = (int *)malloc((m + n) * sizeof(int));
    mergeArrays(arr1, m, arr2, n, merged);
    printf("The merged sorted array:\n");
    for (i = 0; i < m + n; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    free(arr1);
    free(arr2);
    free(merged);

    return 0;
}

/*Output
Enter the number of elements in the first array: 3
Enter the elements of the first sorted array:
12
20
24
Enter the number of elements in the second array: 4
Enter the elements of the second sorted array:
7
8
65
105
The merged sorted array:
7 8 12 20 24 65 105 

*/