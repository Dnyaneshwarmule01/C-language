#include <stdio.h>
void main(){

    
    int num;
    int mul =1;
    printf("Enter number:");
    scanf("%d",&num);

    for(int i=num ; i >=1; i--){
        mul *=i;
        printf("%d\n",i);
        }
        printf("factorial is: %d",mul);





}