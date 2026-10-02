// palindrom number.

#include <stdio.h>
void palindrom(int num)
{
    int digit;
    int temp = num;
    int rev=0;
    while (num > 0)
    {
        digit = num % 10;
        num = num / 10;
        rev = rev*10+digit;
        
        
    }
    printf("%d\n",rev);

    if (temp == rev)
    {
        printf("number is palindrom");
    }
    else{
        printf("number is not palindrom");

    }
    
  
    
}
void main()
{
    int num;
    printf("Enter any number :");
    scanf("%d", &num);
    palindrom(num);
}