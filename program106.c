#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool Perfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if (iNo <= 0)
    {
        return false;
    }

    for (iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return (iSum == iNo);
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : \n");

    if (scanf("%d", &iValue) == 1)
    {
        bRet = Perfect(iValue);

        if (bRet == true)
        {
            printf("%d is a Perfect Number\n", iValue);
        }
        else
        {
            printf("%d is not a Perfect Number\n", iValue);
        }
    }
    else
    {
        printf("Invalid input. Please enter a valid integer.\n");
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}

// Time Complexity : O(N/2) = O(N)