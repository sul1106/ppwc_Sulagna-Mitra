/*Q5. The binary search algorithm that follows may be used to search an array when the elements are in
 order. The algorithm for binary search given as;
 1. Let bottom be the subscript of the initial array element.
 2. Let top be the subscript of the last array element.
 3. Let found be false.
 4. Repeat as long as bottom isn’t greater than top and the target has not been found
 5. Let middle be the subscript of the element halfway between bottom and top.
 6. if the element at middle is the target
 7. Set found to true and index to middle.
 else if the element at middle is larger than the target
 8. Let top be middle- 1.
 else
 9. Let bottom be middle + 1.
 Write and test a function binary srch that implements this algorithm for an array of integers.
 Whenthereisalarge numberofarrayelements, which function do you think is faster: binary srch
 or the linear search algorithm*/

 #include <stdio.h>
int binary_srch(int arr[], int size, int target);
int binary_srch(int arr[], int size, int target) {
    int bottom = 0;
    int top = size - 1;
    int found = 0;
    int middle;

    while (bottom <= top && !found) {
        middle = (bottom + top) / 2;
        if (arr[middle] == target) {
            found = 1;
            return middle;
        } else if (arr[middle] > target) {
            top = middle - 1;
        } else {
            bottom = middle + 1;
        }
    }

    return -1; 
}

int main() {
    int arr[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 43;
    int result = binary_srch(arr, size, target);
    if (result != -1) {
        printf("Target %d found at index %d\n", target, result);
    } else {
        printf("Target %d not found in the array\n", target);
    }

    return 0;
}

/*Output:
Target 43 found at index 13*/