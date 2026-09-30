#include <stdio.h>
void main()
{
  int i;
  printf("Even \n");
  for( i=0 ; i<=50; i++)
  {
    
    if (i%2==0){
      
        printf("%d\n",i);
    }
  
  }
  printf("odd\n");
  for( i=0 ; i<=50; i++)
  {
    
     if(i%2 !=0){
    printf("%d\n",i); 
    
  }
  
  }
  
  
  
}