#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the a,b,c values\n");
    scanf("%d %d",&a,&b,&c);
    if(a==2&&b==2&&c==2)
    {
        printf("10");
    }
    else if(a==b&&b==c&&c==a)
    {
        printf("5");
    }
    else if(b!=a&&c!=a)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}
    

    
   