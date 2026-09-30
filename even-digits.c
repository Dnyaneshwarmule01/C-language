    #include <stdio.h>
    void main()
    {
        int num , digit,sum=0 ,count=0;
        printf("Enter any number: ");
        scanf("%d", &num);
        
        
        while (num != 0)
        {
            digit = num%10;
            if (digit %2==0){
                printf(" %d\n",digit);
                count++;

            }
            num = num/10; //remove the last digit of the number  
            
        }
        printf("even digits of numbers %d\n",count);
        
        
    }



                                                