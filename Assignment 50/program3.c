#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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
bool CheckSorted(PNODE first)
{
    if(first == NULL)
    {
        return true;
    }
    while (first -> next != NULL)
    {
        if(first -> data > first -> next -> data)
        {
            return false;
        }
        first = first -> next;
    }
    return true;
    

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

    if(CheckSorted(head))
    {
        printf(" Linked list is sorted\n");
    }
    else
    {
        printf("linked list is not sorted\n");
    }
    return 0;
}