#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if (*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next = *first;
        *first = newn;
    }
}

BOOL checkPrime(int no)
{
    int iCnt = 0;

    if (no < 2)
    {
        return FALSE;
    }

    for (iCnt = 2; iCnt <= no / 2; iCnt++)
    {
        if (no % iCnt == 0)
        {
            return FALSE;
        }
    }
    return TRUE;
}

void DisplayPrime(PNODE first)
{
    printf("Prime Numbers : ");

    while (first != NULL)
    {
        if (checkPrime(first->data))
        {
            printf("%d\t", first->data);
        }
        first = first->next;
    }
    printf("\n");
}

void Display(PNODE first)
{
    while (first != NULL)
    {
        printf("| %d | -> ", first->data);
        first = first->next;
    }
    printf("NULL\n");
}

int Count(PNODE first)
{
    int iCount = 0;

    while (first != NULL)
    {
        iCount++;
        first = first->next;
    }
    return iCount;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head, 89);
    InsertFirst(&head, 22);
    InsertFirst(&head, 41);
    InsertFirst(&head, 17);
    InsertFirst(&head, 20);
    InsertFirst(&head, 11);

    Display(head);

    iRet = Count(head);
    printf("Number of nodes are : %d\n", iRet);

    DisplayPrime(head);

    return 0;
}
