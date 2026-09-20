#include <stdio.h>
#include <math.h>

//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

int main() {
    int num, firstDigit, lastDigit, numDigits, swappedNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    lastDigit = num % 10;
    numDigits = (int)log10(num);
    firstDigit = num / (int)pow(10, numDigits);

    swappedNum = lastDigit * (int)pow(10, numDigits) + (num % (int)pow(10, numDigits)) - lastDigit + firstDigit;

    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}


//Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/

int main() {
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num) {
        printf("Perfect number\n");
    } else {
        printf("Not perfect number\n");
    }

    return 0;
}
