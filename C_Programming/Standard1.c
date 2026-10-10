#include<stdio.h>

int main()
{
    int std=0;
    printf("Enter Your Standard :");
    scanf("%d",&std);

    if (std==1)
    {
        printf("Your Exam Time is 9.30 AM\n");
        printf("Thank You...!");
    }

    else if(std==2)
    {
        printf("Your Exam Time is 10.30 AM\n");
        printf("Thank You...!");
    
    }

    else if(std==3)
    {
        printf("Your Exam Time is 11.30 AM\n");
        printf("Thank You...!");
    }

    else
    {
        printf("Invalid Input...\n");
        printf("Try Again ");
    }
    
    return 0;
}