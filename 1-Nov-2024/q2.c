#include <stdio.h>
#define MAX 100
#define NILL '\0'

char* stringCopy(char *s, char *d) {
    int i = 0;
    while (s[i] != NILL) {
        d[i] = s[i];
        i++; 
    }
    d[i] = NILL;  
    return d;
}

int main() {
    char s[MAX];
    char d[MAX];
    
    printf("Enter the source string: \n");
    scanf("%[^\n]", s);
    
    stringCopy(s, d);
    printf("Copied String is: %s\n", d);
    
    return 0;
}
