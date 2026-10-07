// perfect number 
#include <stdio.h>
int main(){
    int num ;
    int sum=0;
    printf("Enter any number :");
    scanf("%d", &num);
    for (int i=1; i<num;i++){
       
        if (num % i==0)
        {
            printf("%d\n",i);
            sum=sum+i;
        }
    }
    printf("sum is%d\n",sum);
    
    if(sum==num){
        printf("number is perfect number");
        
    }
    else{
        printf("number is not perfect number");

    }


}