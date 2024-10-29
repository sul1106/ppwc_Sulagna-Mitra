#include <stdio.h>

int main() {
    int input, last_digit, ans = 0, place = 1;
    printf("Enter a number: ");
    scanf("%d", &input);
    while (input > 0) {
        last_digit = input % 10; 
        if (last_digit == 0)
        {
            last_digit = 1;
        } 
        else if (last_digit == 1) 
        {
            last_digit = 0;
        }
        ans += last_digit * place;
        place *= 10;
        input /= 10;
    }
    printf("The number after replacing 0 and 1 is: %d\n", ans);
    return 0;
}
