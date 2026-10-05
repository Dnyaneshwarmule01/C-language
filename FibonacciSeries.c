// print the first N Fibonacci numbers.
#include <stdio.h>
int Fibonacci(int num)

{
    int a = 0, b = 1, c;
    printf("even fibonacci number0-N");
    for (int i = a; i <= num; i++)
    {

        int c = a + b;
        // printf ("%d ",a); //for print all fibonacci

        if (a % 2 == 0)
        {
            printf(" %d \n", a); // only print even number of fibonacci
        }
        a = b;
        b = c;
    }
}

int main()
{
    int num;
    printf("Enter any number :");
    scanf("%d", &num);
    Fibonacci(num);
}
