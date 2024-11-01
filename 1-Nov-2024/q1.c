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