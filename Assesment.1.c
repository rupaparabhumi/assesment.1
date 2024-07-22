#include <stdio.h>

int main() {
    int choice, quantity, more_orders = 1;
    float total_bill = 0;

    // Display menu
    printf("Welcome!\n");

    while (more_orders) {
        printf("\n------------Menu-----------\n");
        printf("1. Pizza   price 180rs/pcs\n");
        printf("2. Burger  price 100rs/pcs\n");
        printf("3. Dosa    price 120rs/pcs\n");
        printf("4. Idli    price 50rs/pcs\n");
        printf("Please enter your choice: ");

        // Get user input
        scanf("%d", &choice);

        // Validate input
        if (choice < 1 || choice > 4) {
            printf("Invalid choice. Please try again.\n");
            continue;
        }

        printf("Enter the quantity: ");
        scanf("%d", &quantity);

        // Calculate item cost
        float item_cost;
        switch (choice) {
            case 1:
                item_cost = 180 * quantity;
                printf("You have selected Pizza.\n");
                break;
            case 2:
                item_cost = 100 * quantity;
                printf("You have selected Burger.\n");
                break;
            case 3:
                item_cost = 120 * quantity;
                printf("You have selected Dosa.\n");
                break;
            case 4:
                item_cost = 50 * quantity;
                printf("You have selected Idli.\n");
                break;
        }

        // Update total bill
        total_bill += item_cost;
        printf("Amount: %.2f\n", item_cost);
        printf("Total Amount is: %.2f\n", total_bill);

        // Ask if the user wants to order more
        printf("Do you want to place more orders? (y/n): ");
        char more;
        scanf(" %c", &more); // Note the space before %c to consume newline

        if (more != 'y' && more != 'Y') {
            more_orders = 0;
        }
    }

    // Display final bill
    printf("\nThank you for your order!\n");
    printf("Your total bill is: %.2f\n", total_bill);

    return 0;
}
