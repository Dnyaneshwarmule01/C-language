// Find the sum of odd digits in a number.

#include <stdio.h>
void sumofodddigit(int num)
{
    int digit;
    int sum=0;
    while (num > 0)
    {
        digit = num % 10;
        if (digit % 2 != 0)
        {
            printf("odd digit in number: %d\n", digit);
            
            sum = sum+ digit;
        }
        num = num / 10;
        
    }
  
    printf("sum of odd digits in number %d", sum);
}
void main()
{
    int num;
    printf("Enter any number :");
    scanf("%d", &num);
    sumofodddigit(num);
}