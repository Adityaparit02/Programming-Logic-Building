#include <stdio.h>


void DisplayDigits(int iNo)
    {
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;       
            iNo = iNo / 10;                     
            printf("%d",iDigit);       
        }
    }




int main()
    {
        int iValue = 0;

        printf("Enter Number : ");
        if (scanf("%d",&iValue) == 1 )
        {
            DisplayDigits(iValue);
        }

        else
        {
            printf("Invalid Input");
        }
        return 0;
    }
