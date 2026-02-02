// Online C compiler to run C program online
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the a,b,c values\n");
    scanf("%d %d",&a,&b,&c);
    if(a+b==10||b+c==10||c+a==10)
    {
        printf("10");
    }
    else if(a>10||b>10||c>10)
    {
        printf("5");
    }
    else
    {
        printf("0");
    }
}