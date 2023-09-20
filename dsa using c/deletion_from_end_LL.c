#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
int main()
{
    node *Head, *P, *Q, *R;
    Head = (node *)malloc(sizeof(node));
    P = Head;
    Head->next = NULL;
    printf("enter data of first node");
    scanf("%d", &P->data);
    int n;
    printf("enter the number of nodes:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        P->next = (node *)malloc(sizeof(node));
        
        P = P->next;
        printf("enter the data of new node \n");
        scanf("%d",&P->data);
    }
    P->next = NULL;

    P = Head;
    while (P != NULL)
    {
        printf("%d \t", P->data);
        P = P->next;
    }
    Q=Head;
    while(Q->next!=NULL)
    {
        Q=Q->next;
    }
    R=Head;
    while(R->next!=Q){
        R=R->next;
    }
    free(Q);
    R->next=NULL;
    R=Head;
    printf("the LL after deletion from the end \n");
    while(R!=NULL){
        printf("%d \t",R->data);
        R=R->next;
    }
return 0;
}