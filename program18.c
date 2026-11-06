#include "Header.h"
void CheckEven(int iNo)
{
    if ((iNo % 2) == 0 )
    {
        printf("Even Number ");
    }

    else
    {
        printf("Odd Number ");
    }

}
int main()
{
    int iValue = 0;
    printf("Enter Number : \n");
    scanf("%d",&iValue);
    CheckEven(iValue);

    
    return EXIT_SUCCESS;
}