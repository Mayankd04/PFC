#include <stdio.h>

int main() {
    int N;  
    scanf("%d", &N);

    int total_leaves = (N - 1) * 3 + 4; 
    printf("%d\n", total_leaves);
    return 0;
}
