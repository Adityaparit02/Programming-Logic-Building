
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    int iSum = 0;


    for (iCnt = 2; iCnt <= iNo / 2; iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            return false;
        }
    }

    return true;
}

int main(void)
{
    int iVal = 0;
    bool bRet = false;

    printf("Enter number: ");
    scanf("%d", &iVal);

    bRet = CheckPrime(iVal);

    if (bRet == true)
    {
        printf("%d is a Prime number\n", iVal);
    }
    else
    {
        printf("%d is not a Prime number\n", iVal);
    }

    return 0;
}
