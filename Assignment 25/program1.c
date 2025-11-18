#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0, iEven = 0;
    int iOdd = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
           iEven = Arr[iCnt]+iEven;
        }
        else
        {
           iOdd = iOdd+Arr[iCnt];
        }

    }
    return  iEven - iOdd;
}

int main()
{
    int iSize = 0,iCnt = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements:");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("unable to allocate memmry");
        return -1;
    }

    printf("Enter %d elements :\n ",iSize);

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        printf("Enter elements : %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p,iSize);

    printf("Difference is %d",iRet);

    free(p);

    return 0;

    
}