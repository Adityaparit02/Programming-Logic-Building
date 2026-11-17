#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = false;

    if (iNo <= 1)
    {
        return false;
    }

    for (iCnt = 2 , bFlag = true; iCnt <= iNo / 2; iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            bFlag = false;
            
        }
    }

    return bFlag;
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
