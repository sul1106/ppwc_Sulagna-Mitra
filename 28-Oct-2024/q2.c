#include <stdio.h>

int main() {
    int x, y;
    printf("Enter a value for x: ");
    scanf("%d", &x);
    printf("Enter a value for y: ");
    scanf("%d", &y);
    if (x >= y) {
        y = x - y;
    } else {
        y = y - x;
    }
    printf("The absolute difference is: %d\n", y);
    return 0;
}