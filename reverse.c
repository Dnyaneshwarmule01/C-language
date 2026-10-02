// revrese number.

#include <stdio.h>
void sumofodddigit(int num)
{
    int digit;
    int rev=0;
    while (num > 0)
    {
        digit = num % 10;
        num = num / 10;
        rev = rev*10+digit;
        
        
    }
    printf("%d\n",rev);
  
    
}
void main()
{
    int num;
    printf("Enter any number :");
    scanf("%d", &num);
    sumofodddigit(num);
}