#include <stdio.h>
#include <stdbool.h>
#include <math.h>

double power(double x, double k);
double modularExponentiation(double base, int exponent, int mod);
void menu();

int main(void) {
    double x, result, k;
    int mod;
    char choice;

    do {
        printf("\n--- Exponentiation Calculator ---\n");
        printf("1. Standard Exponentiation (x^k)\n");
        printf("2. Modular Exponentiation (x^k mod m)\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);
        
        if (choice == '1') {
            printf("Enter the value of x: ");
            scanf("%lf", &x);
            printf("Enter the value of k (can be fractional): ");
            scanf("%lf", &k);
            
            result = power(x, k);
            printf("The value of %.6lf^%.6lf is %.12lf\n", x, k, result);
        }
        else if (choice == '2') {
            printf("Enter the base (x): ");
            scanf("%lf", &x);
            printf("Enter the exponent (k): ");
            scanf("%lf", &k);
            printf("Enter the modulus (m): ");
            scanf("%d", &mod);
            
            if (mod <= 0) {
                printf("Invalid modulus! Must be greater than zero.\n");
            } else {
                result = modularExponentiation((int)x, (int)k, mod);
                printf("The value of (%.0lf^%.0lf) mod %d is %.0lf\n", x, k, mod, result);
            }
        }
        else {
            printf("Invalid choice! Please select a valid option.\n");
        }
        
        printf("\nWould you like to perform another calculation? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    
    printf("Thank you for using the exponentiation calculator!\n");
    return 0;
}

double power(double x, double k) {
    if (k == 0) return 1;  // Any number to the power of 0 is 1
    if (x == 0 && k < 0) {
        printf("Error: Division by zero! Undefined result.\n");
        return 0;
    }
    return pow(x, k);  // Using the C math library for accurate fractional exponentiation
}

double modularExponentiation(double base, int exponent, int mod) {
    double result = 1;
    base = fmod(base, mod);

    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = fmod(result * base, mod);
        }
        base = fmod(base * base, mod);
        exponent /= 2;
    }
    return result;
}
