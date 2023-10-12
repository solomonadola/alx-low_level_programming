#include <stdio.h>

int is_palindrome(int n) {
    int reversed = 0;
    int original = n;

    while (n != 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    return original == reversed;
}

int main() {
    int max_palindrome = 0;

    for (int i = 100; i <= 999; i++) {
        for (int j = i; j <= 999; j++) {
            int product = i * j;
            if (is_palindrome(product) && product > max_palindrome) {
                max_palindrome = product;
            }
        }
    }

    FILE *file = fopen("102-result", "w");
    if (file != NULL) {
        fprintf(file, "%d", max_palindrome);
        fclose(file);
    }

    return 0;
}

