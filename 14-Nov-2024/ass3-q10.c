/*Q10. Write a program to convert a binary number into a hexadecimal number*/
#include <stdio.h>
#include <string.h>
#include <math.h>
void binary_to_hexadecimal(const char *binary, char *hexadecimal) {
    int len = strlen(binary);
    int decimal = 0;
    for (int i = 0; i < len; i++) {
        if (binary[len - i - 1] == '1') {
            decimal += pow(2, i);
        }
    }
    sprintf(hexadecimal, "%X", decimal);
}

int main() {
    const char *binary = "110110111";
    char hexadecimal[20];
    binary_to_hexadecimal(binary, hexadecimal);
    printf("The hexadecimal representation of binary %s is %s\n", binary, hexadecimal);

    return 0;
}
/*Output:
The hexadecimal representation of binary 110110111 is 1B7
*/