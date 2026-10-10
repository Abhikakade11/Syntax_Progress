#include<stdio.h>

int main()
{
    int std=0;
    printf("Enter Your Standard:");
    scanf("%d",&std);

    switch (std)
    {
        case 1:
            printf("Your Exam Time is 9.30 AM");
            break;
        case 2:
            printf("Your Exam Time is 10.30 AM");
            break;
        case 3:
            printf("Your Exam Time is 11.30 AM");
            break;
        default :
            printf("Invalid Input...");
    }
    return 0;
}