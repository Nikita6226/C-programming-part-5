//Product(id, name, quantity, price)

#include <stdio.h>
#include <string.h>

struct Product
{
    int id;
    char name[50];  // Increased size to accommodate longer product names
    int quantity;
    double price;
};

// Function that takes a Product as a parameter (pass by value)
void displayProduct(struct Product p)
{
    printf("\nProduct ID: %d", p.id);
    printf("\nProduct Name: %s", p.name);
    printf("\nQuantity: %d", p.quantity);
    printf("\nPrice: $%.2lf\n", p.price);
}

int main()
{
    struct Product p;

    // Initialize values for p
    p.id = 101;
    strcpy(p.name, "Laptop");
    p.quantity = 50;
    p.price = 999.99;

    // Call displayProduct and pass p by value
    displayProduct(p);

    return 0;
}

