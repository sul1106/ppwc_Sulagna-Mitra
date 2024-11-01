

# Question 1: Find the length of the string without using the strlen function

## Answer:

**Code**:
```
#include <stdio.h>
#include <string.h>
#define MAX 100
#define NILL ('\0')
int stringLen(char *str){
    int len=0;
    while(str[len]!=NILL){
        len++;
    }
    return len;
}
int main(){
    char s[MAX];
    printf("Enter a String: ");
    scanf("%[^\n]s",s);
    int len=stringLen(s);
    printf("The length of the String is: %d",len);
    return 0;
}
```

**Explanation**:
This C program calculates the length of a string without using the strlen function. The stringLen function iterates through each character in the input string until it reaches the null character ('\0'), incrementing a counter to determine the length. The user is prompted to enter a string, and the program then displays the calculated length.


# Question 2:Write a program to copy one string into another without using strcpy function.

## Answer:

**Code**:
```
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

```

**Explanation**:
This C program copies a source string (s) into a destination string (d) without using the strcpy function. The stringCopy function iterates through each character in the source string s and assigns it to the destination string d until it reaches the null character ('\0'). The user is prompted to enter the source string, and the program then displays the copied string.