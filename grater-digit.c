#include <stdio.h>
void main()
{
    int num, digit;
    int max = 0;
    printf("Enter any number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        // print digits of number
        digit = num % 10;
        printf(" %d\n", digit);
        
        if (digit > max)
        {
            max = digit;
            
        }
        

        num = num / 10;    // remove the last digit of the number
        
    }
    printf("%d is grater\n",max);
    
}

// how to print digits in original order