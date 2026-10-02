#include <stdio.h>
#include<math.h>
void armstrome(int number)
{
  int digit, sum=0 ;
  int temp=number;
  while(number>0){
    digit = number % 10;
    printf("%d\n",digit);
    sum = (digit*digit*digit)+sum;
    
    number = number/10;
    
}
printf("%d\n",sum);
printf("%d",temp);
if (sum == temp)
{
    printf("number is armstrong");
}
else{
    printf("Not number is armstrong");
}


  
}

int main()
{
    int number;
    printf("Enter any number");
    scanf("%d", &number);
    armstrome(number);
}