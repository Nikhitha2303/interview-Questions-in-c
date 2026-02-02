#include<stdio.h>
void main()
{
    int temp;
    int summer;
    printf("enter the temperature\n");
    scanf("%d",&temp);
    printf("enter 1 for summer\t 0 for not summer\n");
    scanf("%d",&summer);
    if(summer)
    {
        if(temp<=60&&temp<=100)
        {
            printf("true");
        }
        else
        {
            printf("false");
        }
        }
        else
        {
            if(temp>60 && temp <=90)
            {
                printf("true");
            }
            else
            {
                printf("false");
            }
        }
}
            
            
        
    
    

