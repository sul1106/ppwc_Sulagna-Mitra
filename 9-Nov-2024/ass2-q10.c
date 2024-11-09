/*Q10.Write a program to generate the multiplication table for a given number as follows
 Enter the number > 8
 +------------------------------+
 | 8 16 24 32 40 48 56 64 72 80 |
 | 1  2  3  4  5  6  7  8  9 10 |
 | 8  8  8  8  8  8  8  8  8  8 |
 +------------------------------+
 */
 
 #include <stdio.h>

int main() {
    int num, i;
    printf("Enter the number > ");
    scanf("%d", &num);
    printf("+-------------------------------+\n");
    printf("| ");
    for (i = 1; i <= 10; i++) {
        printf("%2d ", num * i);
    }
    printf("|\n");
    printf("| ");
    for (i = 1; i <= 10; i++) {
        printf("%2d ", i);
    }
    printf("|\n");
    printf("| ");
    for (i = 1; i <= 10; i++) {
        printf("%2d ", num);
    }
    printf("|\n");
    printf("+-------------------------------+\n");

    return 0;
}
