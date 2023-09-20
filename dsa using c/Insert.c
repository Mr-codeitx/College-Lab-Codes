#include <stdio.h>
#include <stdlib.h>
typedef struct dnode{
    struct dnode *prev;
    int data;
    struct dnode *next;
}dnode;
int main(){
         struct dnode *P,*Rear,*Q;
         int n;
         printf("enter the number of nodes");
         scanf("%d",&n);
         for(int i=1;i<=n;i++)
         {
            if(Rear==NULL){
                Rear=(dnode*)malloc(sizeof(dnode));
                Rear->prev=NULL;
                printf("enter the data of node");
                scanf("%d",&Rear->data);
                P=Rear;
                P->next=P;
            }
            else{
                 P=(dnode*)malloc(sizeof(dnode));
                 printf("enter data of new node ");
                 scanf("%d",&Q->data);
                 P->next=Rear->next;
                 Rear->next=P;
                 Rear=Rear->next;
                 
            }
         }
Q=Rear->next;
do
{
    print("%d",Q->data);
    Q=Q->next;
} while (P!=Rear->next);

return 0;

}