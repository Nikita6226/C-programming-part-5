//Product(id, name, quantity, price)

#include<stdio.h>

// Define the Product structure
struct Product {
    int id;          // Product ID
    char name[20];   // Product name (max 20 characters)
    int quantity;    // Quantity of the product
    double price;    // Price of the product
};

void main() {
    // Declare two product variables
    struct Product p1;
    struct Product p2;
    
    // Input details for product 1
    printf("Enter Product 1 ID: ");
    scanf("%d", &p1.id);

    printf("Enter Product 1 Name: ");
    scanf("%s", p1.name);  // No & needed since it's a char array

    printf("Enter Product 1 Quantity: ");
    scanf("%d", &p1.quantity);

    printf("Enter Product 1 Price: ");
    scanf("%lf", &p1.price);

    // Input details for product 2
    printf("\nEnter Product 2 ID: ");
    scanf("%d", &p2.id);

    printf("Enter Product 2 Name: ");
    scanf("%s", p2.name);

    printf("Enter Product 2 Quantity: ");
    scanf("%d", &p2.quantity);

    printf("Enter Product 2 Price: ");
    scanf("%lf", &p2.price);

    // Display details for product 1
    printf("\n\nProduct 1 Details:\n");
    printf("ID: %d\n", p1.id);
    printf("Name: %s\n", p1.name);
    printf("Quantity: %d\n", p1.quantity);
    printf("Price: %.2lf\n", p1.price);

    // Display details for product 2
    printf("\nProduct 2 Details:\n");
    printf("ID: %d\n", p2.id);
    printf("Name: %s\n", p2.name);
    printf("Quantity: %d\n", p2.quantity);
    printf("Price: %.2lf\n", p2.price);
}
