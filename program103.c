#include <stdio.h>
#include <stdlib.h>

int SumFactors(int iNo)
    {

        int iCnt = 0;
        int iSum = 0;

        for (iCnt = 1; iCnt <= iNo /2 ; iCnt++)          
        {
            if ((iNo % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        
        printf("\n");

        return iSum;
    }

    
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the number : \n");


    if (scanf("%d",&iValue) == 1)
    {
        iRet = SumFactors(iValue);
    }
    else
    {
        printf("Invalid input. Please enter a valid integer.\n");
        return EXIT_FAILURE;

    }
    
    return EXIT_SUCCESS;
}

//  Time Complexity : O(N/2)