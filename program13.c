#include <stdio.h>
#include <stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Addition
//  Input         : Integer , Integer
//  Output        : Integer
//  Description   : Performs addition
//  Date          : 04/10/2026
//  Author        : Aditya Namdeo Parit
//
/////////////////////////////////////////////////////////////////////////////////////////////////
int Addition(
                int iNo1,           //First Input
                int iNo2            //Second Input1
            )
{
    int iAns = 0;
    iAns = iNo1 + iNo2;         // Buisness Logic
    return iAns;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//      Entry Point of the Application
/////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{

    int iValue1 = 0 , iValue2 = 0, iResult = 0;

    printf("Enter first number : \n");
    if(scanf("%d",&iValue1 ) != 1)
    {
        fprintf(stderr, "Unable to proceed as Input is Invalid \n");
        return EXIT_FAILURE;
    }

    printf("Enter second number : \n");
    if (scanf("%d",&iValue2 ) != 1)
    {
        fprintf(stderr,"Unable to proceed as Input is Invalid\n");
        return EXIT_FAILURE;
    }

    iResult = Addition(iValue1, iValue2);  
    printf("Addition is : %d\n",iResult);

    return EXIT_SUCCESS;
}


/////////////////////////////////////////////////////////////////////////////////////////////////
// Step 5 : Test the Program
//      Tested test cases : 
//--------------------------------------------------------------
//      Input1              Input2          Output
//--------------------------------------------------------------
//      10                  11              21
//      11                  0               11
//      0                   11              11
//      20                  -9              11
//      -9                  20              11
//      -20                 -11             -31
/////////////////////////////////////////////////////////////////////////////////////////////////