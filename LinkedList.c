#include <stdio.h>
#include <string.h>
#include <malloc.h>

typedef struct Node node;
struct Node
{
    int val;
    node *next;
};


void printList(node *n)
{
    printf("List is - ");
    while(n != NULL)
    {
        printf("%d ", n-> val);
        n = n->next;
    }
}

void push(node **head, int val)
{
    node *new_node = (node*) malloc(sizeof(node));
    new_node -> val = val;
    new_node -> next = *head;
    (*head) = new_node;

}

void deleteMiddleNode(node *head)
{

    node *slwPtr = head;
    node *fstPtr = head;
    node *prev = head;

    //printf("fstPtr->val is %d",fstPtr->val);

    while (fstPtr != NULL && fstPtr -> next != NULL)
    {
        prev = slwPtr;
        slwPtr = slwPtr -> next;
        fstPtr = fstPtr -> next -> next;
    }

    //delete slwPtr

    //map prev to slwPtr->next
    prev -> next = slwPtr -> next;
}

void removeDuplicates(node *head)
{
    node *n ,*next_next= NULL;
    n = head;
    while (n!=NULL)
    {
        if(n->val == n->next->val)
        {
            next_next = n->next->next;
            n-> next = next_next;
            //n = n->next;
        }
        else
            n = n-> next;
    }

}

int main() {
    //code
    //create a linked list first using push. ADD NODE AT THE BEGINNING OF THE LIST

    node *head = NULL;

    push(&head,20);
    push(&head,15);
    push(&head,14);
    push(&head,11);
    push(&head,11);
    push(&head,8);

    //print linked list
    printf("Before Removing Duplicates");
    printList(head);
    //printf("\n After removing duplicates");
    //removeDuplicates(head);
    printf("\n After removing middle");
    deleteMiddleNode(head);
    printList(head);

}