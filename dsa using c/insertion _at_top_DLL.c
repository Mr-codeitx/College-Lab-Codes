#include <stdio.h>
#include <stdlib.h>
typedef struct dnode{
    struct dnode *prev;
    int data;
    struct dnode *next;
}dnode;
int main(){
         struct dnode *P,*Head,*Q;
         int n;
         printf("enter the number of nodes");
         scanf("%d",&n);
         for(int i=1;i<=n;i++)
         {
            if(Head==NULL){
                Head=(dnode*)malloc(sizeof(dnode));
                Head->prev=NULL;
                printf("enter the data of node");
                scanf("%d",&Head->data);
                Head->next=NULL;
                P=Head;
            }
            else{
                 Q=(dnode*)malloc(sizeof(dnode));
                 printf("enter data of new node ");
                 scanf("%d",&Q->data);
                 Q->next=NULL;
                 Q->prev=P;
                 P->next=Q;
                 P=P->next;
            }
         }
         P=Head;
         Q=(dnode*)malloc(sizeof(dnode));
         printf("enter the data of new node ");
         scanf("%d",&Q->data);
         Q->next=P;
         Q->prev=NULL;
         P->prev=Q;
         Head=Q;
         P=Head;
while(P!=NULL)
{
    printf("%d \t",P->next);
    P=P->next;
}
return 0;

}