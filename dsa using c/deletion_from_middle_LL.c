#include <stdio.h>
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
    P=Head;
    int Pos;
    printf("enter the location at which you want to delete the element");
    scanf("%d",&Pos);

    for(int i=1;i<=Pos-2;i++){
        P=P->next;
    }
    Q=P->next;
    P->next=Q->next;
    free(Q);
    P=Head;
    while(P!=NULL){
        printf("%d \t",P->data);
        P=P->next;
    }
return 0;
}