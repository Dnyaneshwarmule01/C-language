#include <stdio.h>
void main(){
    int num;
    int i ;
    int sum ;
    printf("Enter number:");
    scanf("%d",&num);
    
    // for (i = 1; i <=num ; i++)
    // {
    //     sum+=i;
    //     printf("%d\n",i);
    // }
    // printf("sum is %d", sum);
    


    
   
    sum =(num*(num+1))/2;
    printf("sum is %d",sum);




}