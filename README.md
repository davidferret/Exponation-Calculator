# Exponentiation Calculator

This program performs both standard and modular exponentiation. It supports fractional exponents and efficiently handles modular calculations, making it suitable for mathematical and cryptographic applications.

- **Standard Exponentiation**: Computes `x^k` for real values of `x` and `k`.
- **Modular Exponentiation**: Calculates `(x^k) mod m`, useful for cryptographic functions.
- **Fractional Exponents**: Uses the C math library to handle non-integer powers.
- **Efficient Modular Calculation**: Implements an optimized method for computing modular exponentiation.
- **User-Friendly Interface**: Provides an interactive menu for easy selection of operations.

## Example Usage
```
--- Exponentiation Calculator ---
1. Standard Exponentiation (x^k)
2. Modular Exponentiation (x^k mod m)
Enter your choice: 1
Enter the value of x: 9
Enter the value of k (can be fractional): 0.5
The value of 9.000000^0.500000 is 3.000000000000

Would you like to perform another calculation? (y/n): y
--- Exponentiation Calculator ---
1. Standard Exponentiation (x^k)
2. Modular Exponentiation (x^k mod m)
Enter your choice: 2
Enter the base (x): 4
Enter the exponent (k): 13
Enter the modulus (m): 497
The value of (4^13) mod 497 is 445

Would you like to perform another calculation? (y/n): n
Thank you for using the exponentiation calculator!

```

