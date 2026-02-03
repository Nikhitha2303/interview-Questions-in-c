
#include <stdio.h>
int main()
{
    int small,big,goal;
    int bigused,remaining;
    //read inputs
    printf("enter number of small bricks:");
    scanf("%d",&small);
    printf("enter number of big bricks:");
    scanf("%d",&big);
    printf("enter goal length:");
    scanf("%d",&goal);
    //use maximum possible big bricks
    bigused=goal/5;
    if(bigused>big)
    bigused=big;
    //calculate remaining length
    remaining=goal-(bigused*5);
    //check if small bricks can fill remaining length
     if(small>=remaining)
    printf("true\n");
    else
    printf("false\n");
    return 0;
}