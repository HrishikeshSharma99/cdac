#include<stdio.h>
void main()
{
int age;
printf("Enter age :");
scanf("%d",&age);
if(age>18)
{
    if (age<60)
    {
        printf("valid to vote");

    }
        else
        {
            printf("not valid");
        }

}
    else
    {
        printf("not valid");
    }

}
