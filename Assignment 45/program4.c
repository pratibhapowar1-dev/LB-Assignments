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

void InsertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*first==NULL)
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
        printf("| %d | -> ",first -> data);
        first = first -> next;
    }
    printf("NULL\n");

}

int Count(PNODE first)
{
    int iCount = 0;
    while(first != NULL)
    {
        iCount++;
        first = first -> next;
    }
    return iCount;


}
int CountGreater(PNODE first,int no)
{
    int count = 0;

    while (first != NULL)
    {
        if(first->data > no)
        {
            count++;
        }
        first = first -> next;
    }
    return count;
    
}
int main()
{
    
    PNODE head = NULL;
    int iRet = 0;
    int bRet = 0;
   
    InsertFirst(&head,11);
    InsertFirst(&head,51);
    InsertFirst(&head,28);
    InsertFirst(&head,53);
    InsertFirst(&head,6);
    InsertFirst(&head,11);
    Display(head);
    iRet = Count(head);
    printf("Number of nodes are : %d\n", iRet );

   iRet = CountGreater(head,51);
   printf("count greater than 51 : %d\n",iRet);

    return 0;
}