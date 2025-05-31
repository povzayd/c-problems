#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profit, loss, profitPercentage, lossPercentage;
    printf("PROFIT LOSS CALCULATOR\n");
    printf("Enter the cost price: ");
    scanf("%f", &costPrice);

    printf("Enter the selling price: ");
    scanf("%f", &sellingPrice);

    if (sellingPrice > costPrice) {
        profit = sellingPrice - costPrice;
        profitPercentage = (profit / costPrice) * 100;
        printf("Seller has made a profit of %.2f (%.2f%%).\n", profit, profitPercentage);
    } else if (sellingPrice < costPrice) {
        loss = costPrice - sellingPrice;
        lossPercentage = (loss / costPrice) * 100;
        printf("Seller has incurred a loss of %.2f (%.2f%%).\n", loss, lossPercentage);
    } else {
        printf("No profit, no loss.\n");
    }

    return 0;
}