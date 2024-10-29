# Question 1:Write a c program to replace 0 and 1 in a number

## Answer:

**Code**:
```
#include <stdio.h>

int main() {
    int input, last_digit, ans = 0, place = 1;
    printf("Enter a number: ");
    scanf("%d", &input);
    while (input > 0) {
        last_digit = input % 10; // Get the last last_digit
        if (last_digit == 0)
        {
            last_digit = 1;
        } 
        else if (last_digit == 1) 
        {
            last_digit = 0;
        }
        ans += last_digit * place;
        place *= 10; // Move to the next place value
        input /= 10;   // Remove the last last_digit
    }
    printf("The number after replacing 0 and 1 is: %d\n", ans);
    return 0;
}

```

**Explanation**:
For this program, we need to ask the user to enter a number called "input". The program then extracts the last digit from the input number using a while loop and stores it in a variable called "last_digit". If the last digit obtained is 0, it is converted to 1 and vice versa. After that in a new variable called "ans", the final answer is stored, which is found by multiplying the last digit by its place value which is incremented using the variable "place" and adding it to "ans". This continues till the number becomes 0 thereby terminating the while loop. The value stored in "ans" is our required answer.
