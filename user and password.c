#include<stdio.h>
void main()
{
    int userid =5371;
    int userpassword =9647;
    int id;
    int password;
    printf("enter the user id\n");
    scanf("%d",&id);
    printf("enter the password\n");
    scanf("%d",&password);
    if(userid==id)
    {
        if(userpassword==password)
        {
            printf("login successful");
        }
        else
        {
            printf("incorrect password\n");
        }
    }
    else
    {
        printf("incorrect user id\n");
    }
}
    
        
    

    
   
    
    

    
   