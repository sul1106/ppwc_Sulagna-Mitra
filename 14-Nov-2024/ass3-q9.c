/*Q9. Design a program to display the count of each character in a string. For example: input string:
 bintu, output: The count of each character in the string bintu is b-1, i-1, n-1, t-i, u-1.*/

#include <stdio.h>
#include <string.h>

#define CHAR_SET_SIZE 256
void count_characters(const char *str) {
    int occurrences[CHAR_SET_SIZE] = {0};
    for (int i = 0; str[i] != '\0'; i++) {
        occurrences[(unsigned char)str[i]]++;
    }
    printf("The count of each character in the string \"%s\" is: ", str);
    int printed[CHAR_SET_SIZE] = {0}; 
    for (int i = 0; str[i] != '\0'; i++) {
        if (!printed[(unsigned char)str[i]]) {
            printf("%c-%d, ", str[i], occurrences[(unsigned char)str[i]]);
            printed[(unsigned char)str[i]] = 1;
        }
    }
    printf("\n");
}

int main() {
    const char *str = "bintu";
    count_characters(str);
    return 0;
}

/*
Ouput:
The count of each character in the string "bintu" is: b-1, i-1, n-1, t-1, u-1, 
*/