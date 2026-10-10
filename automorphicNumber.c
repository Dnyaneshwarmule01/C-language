#include <stdio.h>
#include <math.h>

void main()
{
    int i, num, sqaure, count = 0, digit, countorg = 0, p, arm;
    printf("Enter any number:");
    scanf("%d", &num);
    int original = num;
    sqaure = num * num;
    int temp = sqaure;
    printf("sqaure:%d\n", sqaure);
    while (sqaure > 0)
    {
        digit = sqaure % 10;
        // printf("%d\n",digit);
        sqaure = sqaure / 10;
        count++;
    }
    // printf("%d\n", count);
    while (num > 0)
    {
        digit = num % 10;

        num = num / 10;
        countorg++;
    }
    // printf("%d\n", countorg);

    p = 1;
    for (int i = 0; i < countorg; i++)
    {
        p = p * 10;
    }
    // printf("%d\n", p);
    arm = temp % p;
    // printf("%d\n", arm);
    if (original == arm)
    {
        printf("number is Automorphic Number");
    }
    else
    {
        printf("number is not Automorphic Number");
    }
}