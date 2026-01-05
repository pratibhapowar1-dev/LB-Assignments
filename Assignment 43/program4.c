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

int SecMaximum(PNODE first)
{
    int max1, max2;

    if (first == NULL || first->next == NULL)
    {
        return -1;
    }

    max1 = max2 = first->data;
    first = first->next;

    while (first != NULL)
    {
        if (first->data > max1)
        {
            max2 = max1;
            max1 = first->data;
        }
        else if (first->data > max2 && first->data != max1)
        {
            max2 = first->data;
        }
        first = first->next;
    }
    return max2;
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

    iRet = SecMaximum(head);
    printf("Second maximum element is : %d\n", iRet);

    return 0;
}
