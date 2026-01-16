#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PNODE *first , int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;

    if(* first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn -> next = *first;
        *first = newn;
    }
}
void Dispaly(PNODE first)
{
    while (first != NULL)
    {
        printf(" | %d| ->", first -> data);
        first = first -> next;
    }
    printf("NULL\n");
    
}
int Count(PNODE first)
{
    int iCount = 0;
    while (first != NULL)
    {
        iCount ++;
        first = first -> next;
    }
    return iCount;   
}

void DisplayAlternate(PNODE first)
{
    int iCnt = 0;
    printf("Alternate nodes  : ");

    while (first != NULL)
    {
        if(iCnt %2 != 0)
        {
            printf("%d\t",first -> data);
        }
        iCnt++;
        first = first -> next;
    }
    printf("\n");
    
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;
    int bRet = 0;

    InsertFirst(&head,75);
    InsertFirst(&head,53);
    InsertFirst(&head,43);
    InsertFirst(&head,36);
    InsertFirst(&head,25);
    InsertFirst(&head,11);

    Dispaly(head);
    iRet = Count(head);
    printf(" Number of nodes are : %d\n", iRet);

    DisplayAlternate(head);

    return 0;
}