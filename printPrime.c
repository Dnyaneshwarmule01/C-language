// Print all prime numbers from 1 to N
#include <stdio.h>
int PrintPrime(int num)
{
    int i, mul;
    for (i = 1; i <= num; i++)
    {
        int count = 0;

        for (int j = 1; j <= num; j++)
        {
            int mul = i % j;

            if (mul == 0)
            {
                count++;
            }
        }

        if (count == 2)
        {
            printf("%d\n", i);
        }
    }
}

int main()
{
    int num;
    printf("Enter any number :");
    scanf("%d", &num);
    PrintPrime(num);
}
