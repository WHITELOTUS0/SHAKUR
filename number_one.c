#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profit;

    // Input cost price and selling price from the user
    printf("Enter the cost price: ");
    scanf("%f", &costPrice);
    
    printf("Enter the selling price: ");
    scanf("%f", &sellingPrice);

    // Calculate profit
    profit = sellingPrice - costPrice;

    // Check if there's profit or loss
    if (profit > 0) {
        printf("You made a profit of UGX%.2f\n", profit);
    } else if (profit < 0) {
        printf("You incurred a loss of UGX%.2f\n", -profit);
    } else {
        printf("You broke even. There is no profit or loss.\n");
    }

    return 0;
}
