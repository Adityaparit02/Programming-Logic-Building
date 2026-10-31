#include <stdio.h>
#include <stdlib.h>

void Perfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for (iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    if (iSum == iNo && iNo > 0)
    {
        printf("%d is a Perfect Number\n", iNo);
    }
    else
    {
        printf("%d is not a Perfect Number\n", iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");

    if (scanf("%d", &iValue) == 1)
    {
        Perfect(iValue);
    }
    else
    {
        printf("Invalid input. Please enter a valid integer.\n");
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}

// Time Complexity : O(N/2) = O(N)