//Complex(real, imaginary)

#include<stdio.h>

struct Complex {
    double real;
    double imaginary;
};

void main() {
    struct Complex c1;
    struct Complex c2;
    
    // Input for complex number 1
    printf("\nEnter the real part of complex number 1: ");
    scanf("%lf", &c1.real);

    printf("Enter the imaginary part of complex number 1: ");
    scanf("%lf", &c1.imaginary);

    // Input for complex number 2
    printf("\n\nEnter the real part of complex number 2: ");
    scanf("%lf", &c2.real);

    printf("Enter the imaginary part of complex number 2: ");
    scanf("%lf", &c2.imaginary);

    // Display complex numbers
    printf("\n\nComplex number 1: %.2lf + %.2lfi", c1.real, c1.imaginary);
    printf("\nComplex number 2: %.2lf + %.2lfi", c2.real, c2.imaginary);
}
