#include <stdio.h>
int main()
{
    int row;
    int columns;
    printf("enter number of rows\n");
    scanf("%d",&row);
    printf("enter number of columns\n");
    scanf("%d",&columns);
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=columns;j++)
        {
            if(i==1||i==row||j==1||j==columns)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
            