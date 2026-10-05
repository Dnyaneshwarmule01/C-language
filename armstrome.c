#include <stdio.h>
#include <math.h>
void armstrome(int number)
{
    int digit, sum = 0, count = 0;
    int temp = number;
    int original = temp;

    while (number > 0)
    {
        digit = number % 10;

        number = number / 10;
        count++;
    }

    printf("count%d\n", count);

    while (temp > 0)
    {
        digit = temp % 10;

        int power = 1;

        for (int i = 1; i <= count; i++)
        {
            power = power * digit;
        }

        sum = sum + power;

        temp = temp / 10;
    }

    printf("%d", sum);

    if (sum == original)
    {
        printf("number is armstrong");
    }
    
    else
    {
        printf(" number is Not armstrong");
    }
}

int main()
{
    int number;
    printf("Enter any number");
    scanf("%d", &number);
    armstrome(number);
}