#include <stdio.h>
void main()
{
    int weekend;
    int cigars;
    printf("enter number of cigars\n");
    scanf("%d",&cigars);
    printf("enter 1 for weekend enter 0 for not weekend");
    scanf("%d",&weekend);
    if(weekend==1)
    {
        if(cigars>=40)
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
        if(cigars>=40&&cigars<=60)
        {
            printf("true");
        }
        else
        {
            printf("false");
        }
    }
}
        