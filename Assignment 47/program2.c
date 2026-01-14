#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)

struct node
{
    int data;
    struct node *next;
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

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next = *first;
        *first = newn;
    }
}

void Display(PNODE first)
{
    while (first != NULL)
    {
        printf("|%d|->", first->data);
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

void CountDigits(PNODE first)
{
   int iCount = 0;
   int iNo = 0;

   while (first!= NULL)
   {
     iNo = first -> data;
     iCount = 0;

     if(iNo == 0)
     {
        iCount = 1;
     }
     while (iNo != 0)
     {
        iCount++;
        iNo = iNo /10;
     }

     printf("Digits in%d = %d\n", first -> data , iCount);
     first  = first -> next;
     
   }
   
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;
    
    InsertFirst(&head,61);
    InsertFirst(&head,51);
    InsertFirst(&head,28);
    InsertFirst(&head,53);
    InsertFirst(&head,21);
    InsertFirst(&head,11);

    Display(head);

    iRet = Count(head);
    printf("Number of nodes are : %d\n", iRet);

    CountDigits(head);
    return 0;
}
