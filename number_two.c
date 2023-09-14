//Number Two
#include <stdio.h>

int main() {
    int num1, num2;
    float sum, average, difference, product;

    // Input two integer values from the user
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Calculate the sum
    sum = num1 + num2;

    // Calculate the average
    average = (float)(num1 + num2) / 2;

    // Calculate the difference
    difference = num1 - num2;

    // Calculate the product
    product = num1 * num2;

    // Display the results
    printf("Sum: %d\n", (int)sum);
    printf("Average: %.2f\n", average);
    printf("Difference: %d\n", (int)difference);
    printf("Product: %d\n", (int)product);

    return 0;
}
