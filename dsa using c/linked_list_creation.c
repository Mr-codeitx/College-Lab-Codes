/*#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
int main()
{
    node *Head, *P, *Q;
    Head = (node *)malloc(sizeof(node));
    P = Head;
    Head->next = NULL;
    printf("enter data of first node");
    scanf("%d", &P->data);
    int n;
    printf("enter the number of nodes:");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
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
} */

#include<stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node1;

int main()
{
    node1*P,*Head=NULL,*Q;
    int n;
    printf("enter the number of nodes:");
    scanf("%d",&n);

    for(int i = 1; i<=n; i++)
    {
        if(Head==NULL)
        {
            Head=(node1*)malloc(sizeof(node1));
            printf("enter the data of new Node:");
            scanf("%d",&Head->data);
            Head->next=NULL;
            P=Head;
        }
        else
        {  
            Q=(node1*)malloc(sizeof(node1));
            printf("enter the data of new Node");
            scanf("%d",&Q->data);
            Q->next=NULL;
            P->next=Q;
            P=Q;
        }
    }
    P=Head;
    while(P!=NULL)
    {
        printf("%d \t",P->data);
        P=P->next;
    }
}