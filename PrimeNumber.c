// Prime Number

#include <stdio.h>
void PrimeNumber(int num)
{
    int i , count=0;
    
    for (i = 1 ; i<=num ;i++){
        int mul = num%i;
        printf("number %d \n",mul);
        if (mul == 0){
            count++;
        }  
    }
    printf("count %d \n",count);
    
    
    if (count == 2){
        printf("number is prime");
        
    }
    else{
        printf("number is not prime");

    }
  
    
}
int main()
{
    int num;
    printf("Enter any number :");
    scanf("%d", &num);
    PrimeNumber(num);
    return 0;
}