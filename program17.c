#include "Header.h"

int main()
{
    int iValue = 0;
    printf("Enter Number : \n");
    scanf("%d",&iValue);


    if ((iValue % 2) == 0 )
    {
        printf("Even Number ");
    }

    else
    {
        printf("Odd Number ");
    }
    return EXIT_SUCCESS;
}