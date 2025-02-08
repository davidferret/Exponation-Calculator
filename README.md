# Exponentiation Calculator

This is project performs both standard and modular exponentiation. It's designed to help you efficiently compute exponentiation for mathematical and cryptographic applications, supporting fractional exponents and optimized modular calculations.

The way I programmed it was by implementing a function that calculates `x^k` for both integer and fractional values of `k` using the C math library. To make it more versatile, I added modular exponentiation, which computes `(x^k) mod m`, which is a critical operation in cryptography. Since modular exponentiation can be computationally intensive, I used an optimized method that significantly reduces processing time, especially for large values.

I created this project because I needed a fast and reliable way to handle exponentiation, especially in cases where modular arithmetic is needed. Working on the optimization techniques was a great learning experience, and I made sure the interface is simple so you can easily choose between standard and modular exponentiation.

## Example Output
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

