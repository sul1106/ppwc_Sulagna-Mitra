#include <stdio.h>
int main() {
int item;
int prod = 1; 
printf("Enter a value for item: ");
scanf("%d", &item);
if (item != 0) {
    prod *= item; 
    }
printf("The value of product is: %d\n", prod);
return 0;
}


