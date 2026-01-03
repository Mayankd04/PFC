#include <stdio.h>

int reverseNumber(int num) {
    int reversed = 0, remainder;
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    return reversed;
}

int main() {
    int num = 1234;
    printf("Original: %d\n", num);
    printf("Reversed: %d\n", reverseNumber(num)); 
    return 0;
}
