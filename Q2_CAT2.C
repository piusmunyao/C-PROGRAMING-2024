#include <stdio.h>

int main() {
    // Variables
    int customerId, unitsConsumed;
    char customerName[50];
    float chargesPerUnit, totalAmount, surcharge = 0.0;

    // Input
    printf("Enter Customer ID: ");
    scanf("%d", &customerId);
    printf("Enter Customer Name: ");
    scanf("%s", customerName);
    printf("Enter Units Consumed: ");
    scanf("%d", &unitsConsumed);

    // Calculate charges per unit based on units consumed
    if (unitsConsumed <= 300) {
        chargesPerUnit = 175.0;
    } else if (unitsConsumed < 600) {
        chargesPerUnit = 200.0;
    } else if (unitsConsumed < 800) {
        chargesPerUnit = 300.0;
    } else {
        chargesPerUnit = 400.0;
    }

    // Calculate total bill amount
    totalAmount = unitsConsumed * chargesPerUnit;

    // Apply surcharge if total bill exceeds 500
    if (totalAmount > 500) {
        surcharge = totalAmount * 0.20;
        totalAmount += surcharge;
    }

    // Ensure minimum bill is 200
    if (totalAmount < 200) {
        totalAmount = 200;
    }

    // Output
    printf("\nCustomer ID: %d\n", customerId);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", unitsConsumed);
    printf("Charges per Unit: %.2f Ksh\n", chargesPerUnit);
    printf("Total Amount to Pay: %.2f Ksh\n", totalAmount);

    return 0;
}