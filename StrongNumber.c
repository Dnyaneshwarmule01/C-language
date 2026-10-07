// Strong Number
#include <stdio.h>
int main()
{
    int num, i, digit, sum = 0;
    printf("Enter any number :");
    scanf("%d", &num);
    int temp = num;

    while (num != 0)
    {
        digit = num % 10;
        num = num / 10;
        int fact = 1;

        for (i = 1; i <= digit; i++)
        {

            fact = fact * i;
        }

        sum = sum + fact;
    }
    if (temp == sum)
    {
        printf(" number is strong number");
    }
    else
    {
        printf(" number is not strong number");
    }
}