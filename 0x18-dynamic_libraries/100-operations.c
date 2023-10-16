#include <stdio.h>

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to subtract two integers
int sub(int a, int b) {
    return a - b;
}

// Function to multiply two integers
int mul(int a, int b) {
    return a * b;
}

// Function to divide two integers (integer division)
int div(int a, int b) {
    if (b == 0) {
        return 0;  // To avoid division by zero
    }
    return a / b;
}

// Function to calculate the remainder of division
int mod(int a, int b) {
    if (b == 0) {
        return 0;  // To avoid division by zero
    }
    return a % b;
}

