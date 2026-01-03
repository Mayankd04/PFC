#include <stdio.h>

int reverse(int num) {
    int rev = 0, rem;
    while (num > 0) { 
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    return rev;
}

int isPalindrome(int num) {
    return num == reverse(num);
}

int main() {
    int num = 121;
    if (isPalindrome(num)) {
        printf("%d is a palindrome.\n", num); 
    } else {
        printf("%d is not a palindrome.\n", num);
    }
    return 0;
}
