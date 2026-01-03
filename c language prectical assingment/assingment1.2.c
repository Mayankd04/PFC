#include <stdio.h>

int main() {
    char ch;
    int days;
    float rate, fine;
    
    scanf(" %c %d %f", &ch, &days, &rate);
    fine = days * rate;
    
    printf("Library Receipt\v\n");
    printf("Member Initial: %c\n", ch);
    printf("Days:\t\t%05d\n", days);
    printf("Fine:\t\t%.2f INR\n", fine);
    
    return 0;
}
