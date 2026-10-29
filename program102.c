#include <stdio.h>
#include <stdlib.h>

void DisplayFactors(int iNo)
    {

        int iCnt = 0;

        printf("Factors of %d are : \n",iNo);
        for (iCnt = 1; iCnt <= iNo /2 ; iCnt++)          
        {
            if ((iNo % iCnt) == 0)
            {
                printf("%d\n",iCnt);
            }
        }
        
        printf("\n");
    }

    
int main()
{
    int iValue = 0;
    printf("Enter the number : \n");


    if (scanf("%d",&iValue) == 1)
    {
        DisplayFactors(iValue);
    }
    else
    {
        printf("Invalid input. Please enter a valid integer.\n");
        return EXIT_FAILURE;

    }
    
    return EXIT_SUCCESS;
}

//  Time Complexity : O(N/2)