#include<stdio.h>
#include<stdlib.h>

# pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PNODE *first, int no)
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
void Display(PNODE first)
{
    while(first != NULL)
    {
        printf(" | %d |->", first ->data);
        first = first -> next;
    }
    printf("NULL\n");

}
int Count(PNODE first)
{
    int iCount = 0;
    while (first != NULL)
    {
        iCount++;
        first = first -> next;
    }
    return iCount;  

}
void DisplayOddPosition(PNODE first)
{
    int iPos = 1;
    while (first!=NULL)
    {
        if(iPos % 2 != 0 )
        {
            printf("%d\t",first -> data);
        }
        iPos ++;
        first  = first -> next;
    }
    
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head,75);
    InsertFirst(&head,54);
    InsertFirst(&head,47);
    InsertFirst(&head,36);
    InsertFirst(&head,24);
    InsertFirst(&head,11);

    printf("Original linked list is : \n");
    Display(head);
    iRet = Count(head);
    printf("Number of nodes are : %d\n",iRet);

    DisplayOddPosition(head);

    return 0;
}