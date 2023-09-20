#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node;

int main(){
    node *Head,*P,*Q;
    Head=(node*)malloc(sizeof(node));
    printf("enter the data of first node:");
    scanf("%d",&Head->data);
    P=Head;
    P->next=NULL;
    int n;
    printf("how many node you want to enter the in the node from the beginning");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        Q=(node*)malloc(sizeof(node));
        Q->next=P;
        printf("enter its data");
        scanf("%d",&Q->data);
        Head=Q;
        P->next==NULL;
        P=Q;
    }
    P=Head;
    while (P!=NULL){
        printf("%d \t5",P->data);
        P=P->next;
    }
    return 0;
}