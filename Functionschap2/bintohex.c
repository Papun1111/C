#include <stdio.h>
#include <string.h>
#include <math.h>

// Function to convert a binary string to a decimal number
int binaryToDecimal(char binary[]) {
    int decimal = 0;
    int length = strlen(binary);
    for (int i = 0; i < length; i++) {
        if (binary[i] == '1') {
            decimal += pow(2, length - 1 - i); // Add the corresponding power of 2
        }
    }
    return decimal;
}

// Function to convert a decimal number to hexadecimal string
void decimalToHexadecimal(int decimal, char hex[]) {
    int i = 0;
    while (decimal != 0) {
        int remainder = decimal % 16;
        if (remainder < 10) {
            hex[i] = remainder + '0'; // Convert to character
        } else {
            hex[i] = remainder - 10 + 'A'; // Convert to character for A-F
        }
        decimal /= 16;
        i++;
    }
    hex[i] = '\0'; // Null-terminate the string
}

// Function to reverse a string (needed to print hexadecimal from least to most significant)
void reverseString(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char binary[100];
    char hex[100];
    
    // Input binary number
    printf("Enter a binary number: ");
    scanf("%s", binary);
    
    // Step 1: Convert binary to decimal
    int decimal = binaryToDecimal(binary);
    
    // Step 2: Convert decimal to hexadecimal
    decimalToHexadecimal(decimal, hex);
    
    // Step 3: Reverse the hexadecimal string to get the correct order
    reverseString(hex);
    
    // Output the hexadecimal number
    printf("The hexadecimal equivalent is: %s\n", hex);
    
    return 0;
}
