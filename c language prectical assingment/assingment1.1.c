#include <stdio.h>
int main(){
    
    printf("DIWALI FIREWORKS\n");
    int P,N,D;
    printf("Item price: \t");
    scanf("%d",&P);

    printf("Number of items: \t");
    scanf("%d",&N); 
    printf("Discount percentage: \t");
    scanf("%d",&D);
    
    int total = P * N;
    float discount = (total * D) / 100;
    float final_amount = total - discount;
    printf("Final amount to be paid: %0.2f rupees\n", final_amount);
    
    printf("\a");
    return 0;
}