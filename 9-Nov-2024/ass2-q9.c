/*Q9.Design a C program to display the following pattern based on the input given by the user.
Enter the choice of the character : G
ABCDEFGFEDCBA
ABCDEF FEDCBA
ABCDE   EDCBA
ABCD     DCBA
ABC       CBA
AB         BA 
A           A*/

#include <stdio.h>

int main() {
    char ch, i, j;
    int rows;
    printf("Enter the choice of the character: ");
    scanf(" %c", &ch);
    rows = ch - 'A' + 1;
    for (i = 0; i < rows; i++) {
        for (j = 'A'; j <= ch - i; j++) {
            printf("%c ", j);
        }
        for (j = 0; j < 2 * i - 1; j++) {
            printf("  ");
        }
        if (i != 0) {  
            for (j = ch - i; j >= 'A'; j--) {
                printf("%c ", j);
            }
        } else { 
            for (j = ch - i - 1; j >= 'A'; j--) {
                printf("%c ", j);
            }
        }

        printf("\n");
    }

    return 0;
}


