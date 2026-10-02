// Count the number of odd digits in a number.

#include <stdio.h>
void oddcount(int num)
{
    int digit, count = 0;
    while (num > 0)
    {
        digit = num % 10;
        if (digit % 2 != 0)
        {
            printf("odd digit in number: %d\n", digit);
            count++;
           
        }
        num = num / 10;
        
    }
    printf("number of odd digits in number %d\n", count);
    
}
void main()
{
    int num;
    printf("Enter any number :");
    scanf("%d", &num);
    oddcount(num);
}