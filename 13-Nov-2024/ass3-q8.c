/*Q8.Construct a program to find the occurrence of the first repetitive character in a string. For example, let
 the string racecar, the program should give the output as The first repititive character in the string
 racecar is c*/

#include <stdio.h>
#include <string.h>

#define CHAR_SET_SIZE 256
char find_first_repetitive_char(const char *str) {
    int occurrences[CHAR_SET_SIZE] = {0}; 
    for (int i = 0; str[i] != '\0'; i++) {
        occurrences[(unsigned char)str[i]]++;
        if (occurrences[(unsigned char)str[i]] == 2) {
            return str[i];
        }
    }

    return '\0'; 
}

int main() {
    const char *str = "racecar";
    char first_repetitive_char = find_first_repetitive_char(str);
    if (first_repetitive_char != '\0') {
        printf("The first repetitive character in the string \"%s\" is '%c'\n", str, first_repetitive_char);
    } else {
        printf("No repetitive character found in the string \"%s\"\n", str);
    }

    return 0;
}

/*
Output:
The first repetitive character in the string "racecar" is 'c'
*/