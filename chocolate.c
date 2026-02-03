#include <stdio.h>
void main()
{
    int small,big,goal;
    printf("enter amount of small bars\n");
    scanf("%d",&small);
    printf("enter amount of big bars\n");
    scanf("%d",&big);
    printf("enter amount of cake weight\n");
    scanf("%d",&goal);
    int required=goal/5;
    if(required<=big)
    {
        int remaining=goal-(required*5);
        if(remaining<=small)
        {
            printf("%d",remaining);
        }
        else
        {
            printf("-1");
    }
    }
    else
    {
        int remaining1=goal-(big*5);
        if(remaining1<=small)
        {
            printf("%d",remaining1);
        }
        else
        {
            printf("-1");
        }
    }
}
    
