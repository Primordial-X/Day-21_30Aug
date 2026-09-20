#include <stdio.h>
#include <math.h>

//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/

int main() {
    int num, digit, product = 1, hasOddDigit = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;
        if (digit % 2 != 0) {
            product *= digit;
            hasOddDigit = 1; 
        }
        num /= 10;
    }

    if (!hasOddDigit) {
        product = 1;
    }

    printf("Product of odd digits: %d\n", product);

    return 0;
}



//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/

int main() {
    char binary[33]; // Assuming a maximum of 32 bits for the binary number
    printf("Enter a binary number: ");
    scanf("%s", binary);

    printf("1's complement: ");
    for (int i = 0; binary[i] != '\0'; i++) {
        if (binary[i] == '0') {
            printf("1");
        } else if (binary[i] == '1') {
            printf("0");
        } else {
            printf("\nInvalid binary number.\n");
            return 1;
        }
    }
    printf("\n");

    return 0;
}


