#include <stdio.h>
void main()
{
    int num, digit, sum = 0, count = 0;
    printf("Enter any number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        // print digits of number
        digit = num % 10;
        printf(" %d\n", digit);
        num = num / 10;    // remove the last digit of the number
        sum = sum + digit; // sum of the digits of number
        count++;
    }
    printf("sum of the all digits %d\n", sum);
    printf("digits of numbers %d\n", count);
}

// how to print digits in original order