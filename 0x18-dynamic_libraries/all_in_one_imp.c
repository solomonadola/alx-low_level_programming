#include "main.h"

/**
 * _islower - Check if a character is a lowercase letter
 * @c: The character to check
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c) {
    return (c >= 'a' && c <= 'z');
}

/**
 * _isalpha - Check if a character is an alphabetic character (upper or lower case)
 * @c: The character to check
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c) {
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/**
 * _abs - Calculate the absolute value of an integer
 * @n: The integer to find the absolute value of
 * Return: The absolute value of n
 */
int _abs(int n) {
    return (n < 0) ? -n : n;
}

/**
 * _isupper - Check if a character is an uppercase letter
 * @c: The character to check
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c) {
    return (c >= 'A' && c <= 'Z');
}

/**
 * _isdigit - Check if a character is a digit
 * @c: The character to check
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c) {
    return (c >= '0' && c <= '9');
}

/**
 * _strlen - Calculate the length of a string
 * @s: The input string
 * Return: The length of the string
 */
int _strlen(char *s) {
    int length = 0;
    while (s[length] != '\0') {
        length++;
    }
    return length;
}

/**
 * _puts - Write a string to the standard output
 * @s: The string to write
 */
void _puts(char *s) {
    int i = 0;
    while (s[i] != '\0') {
        _putchar(s[i]);
        i++;
    }
}

/**
 * _strcpy - Copy a string from src to dest
 * @dest: The destination string
 * @src: The source string
 * Return: Pointer to the destination string
 */
char *_strcpy(char *dest, char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

/**
 * _atoi - Convert a string to an integer
 * @s: The input string
 * Return: The integer value of the string
 */
int _atoi(char *s) {
    int result = 0;
    int sign = 1;
    int i = 0;

    if (s[0] == '-') {
        sign = -1;
        i++;
    }

    for (; s[i] != '\0'; i++) {
        result = result * 10 + s[i] - '0';
    }

    return sign * result;
}

/**
 * _strcat - Concatenate two strings (dest and src)
 * @dest: The destination string
 * @src: The source string
 * Return: Pointer to the destination string
 */
char *_strcat(char *dest, char *src) {
    int dest_len = _strlen(dest);
    int i;

    for (i = 0; src[i] != '\0'; i++) {
        dest[dest_len + i] = src[i];
    }
    dest[dest_len + i] = '\0';

    return dest;
}

/**
 * _strncat - Concatenate n characters from src to dest
 * @dest: The destination string
 * @src: The source string
 * @n: Number of characters to concatenate
 * Return: Pointer to the destination string
 */
char *_strncat(char *dest, char *src, int n) {
    int dest_len = _strlen(dest);
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[dest_len + i] = src[i];
    }
    dest[dest_len + i] = '\0';

    return dest;
}

/**
 * _strncpy - Copy n characters from src to dest
 * @dest: The destination string
 * @src: The source string
 * @n: Number of characters to copy
 * Return: Pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n) {
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }

    for (; i < n; i++) {
        dest[i] = '\0';
    }

    return dest;
}

/**
 * _strcmp - Compare two strings
 * @s1: The first string
 * @s2: The second string
 * Return: 0 if strings are equal, positive if s1 > s2, negative if s1 < s2
 */
int _strcmp(char *s1, char *s2) {
    int i = 0;

    while (s1[i] == s2[i] && s1[i] != '\0') {
        i++;
    }

    return s1[i] - s2[i];
}

/**
 * _memset - Fill memory with a constant byte
 * @s: The memory to be filled
 * @b: The byte to be set
 * @n: The number of bytes to be set
 * Return: Pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n) {
    unsigned int i;

    for (i = 0; i < n; i++) {
        s[i] = b;
    }

    return s;
}

/**
 * _memcpy - Copy memory area from src to dest
 * @dest: The destination memory area
 * @src: The source memory area
 * @n: The number of bytes to be copied
 * Return: Pointer to the destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n) {
    unsigned int i;

    for (i = 0; i < n; i++) {
        dest[i] = src[i];
    }

    return dest;
}
