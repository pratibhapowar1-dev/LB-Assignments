#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSe 0

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

    newn -> data = no;
    newn -> next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn -> next = *first;
        *first = newn;
    }
}
int Addition(PNODE first)
{
    int iSum = 0;

     while(first != NULL)
     {
        iSum = iSum + first -> data;
        first = first -> next;
        
     }
     return iSum;

}
void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d | -> ",first -> data);
        first = first -> next;
    }
    printf("NULL\n");

}

int Count(PNODE first)
{
    int iCount = 0;
    while ((first != NULL))
    {
        iCount++;
        first = first -> next;
    }
    
    return iCount;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;
    int bRet = 0;

    InsertFirst(&head,11);
    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);
    Display(head);
    iRet = Count(head);
    printf("Number of nodes are : %d\n", iRet );

    bRet=Addition(head);
    printf("Addition of all data is : %d\n",bRet);
    
    return 0;
}