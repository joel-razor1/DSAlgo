#include <stdlib.h>
#include <stdio.h>

//defining the structure of the node
struct Node
{
    int data;
    struct Node *next;
};

void insertNode(struct Node **head_ref, int new_data, int position)
{

    //declare some variables
    int k = 2; //find why it is working for k=2 and not k=1.
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

    //if the new node is to be inserted at 1st position
    if (position == 1)
    {
        new_node->data = new_data;
        new_node->next = (*head_ref);
        (*head_ref) = new_node;
    }
    else if (position == -1)
    {
        struct Node *last = (*head_ref);
        new_node->data = new_data;
        new_node->next = NULL;
        if (*head_ref == NULL)
        {
            *head_ref = new_node;
            return;
        }
        while (last->next != NULL)
        {
            last = last->next;
        }
        last->next = new_node;
    }
    else
    {
        struct Node *tmp = (*head_ref);
        while (k < position)
        {
            k++;
            tmp = tmp->next;
        }
        new_node->next = tmp->next;
        new_node->data = new_data;
        tmp->next = new_node;
    }
}

void printit(struct Node *node)
{
    while (node != NULL)
    {
        printf(" %d ", node->data);
        node = node->next;
    }
}

int main()
{

    struct Node *head = NULL;
    int p;
    int d;
    int x;
    char y = 'y';

    printf("\n Enter a position where you want to insert the node: ");
    scanf("%d", &p);

    printf("\n Enter data which should contain in the node: ");
    scanf("%d", &d);
    insertNode(&head, d, p);
    printf("\n Enter a position where you want to insert the node: ");
    scanf("%d", &p);
    printf("\n Enter data which should contain in the node: ");
    scanf("%d", &d);
    insertNode(&head, d, p);
    printf("\n Enter a position where you want to insert the node: ");
    scanf("%d", &p);
    printf("\n Enter data which should contain in the node: ");
    scanf("%d", &d);
    insertNode(&head, d, p);
    printf("\n Enter a position where you want to insert the node: ");
    scanf("%d", &p);
    printf("\n Enter data which should contain in the node: ");
    scanf("%d", &d);
    insertNode(&head, d, p);
    printit(head);
    return 0;
}

/*  
            TEST_OUTPUT
 Enter a position where you want to insert the node: 1

 Enter data which should contain in the node: 1

 Enter a position where you want to insert the node: 1

 Enter data which should contain in the node: 2

 Enter a position where you want to insert the node: 2

 Enter data which should contain in the node: 3

 Enter a position where you want to insert the node: 2

 Enter data which should contain in the node: 4
 2  4  3  1
 */