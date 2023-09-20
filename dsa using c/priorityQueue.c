#include <stdio.h>
#include <stdlib.h>

typedef struct PQ{
    int data;
    int priority;
    struct PQ *next;
}PQ;

int main()
{
    int choice;
    PQ *Front = NULL, *Rear = NULL,*P,*Q;

    do{

        printf("\nEnter the choice ");
        printf("\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY");
        scanf("%d",&choice);

        switch(choice){

        case 1:
                P = (PQ*)malloc(sizeof(PQ));
                printf("\nEnter the data");
                scanf("%d",&P->data);
                printf("\nEnter its Priority ");
                scanf("%d",&P->priority);
            if(Front == NULL && Rear == NULL)
            {
                P->next = NULL;
                Rear = Front = P;
            }
            else if(P->priority<=Front->priority){
                if(P->priority<Front->priority){
                    P->next = Front;
                    Front = P;
                    P = NULL;
                }
                else{
                    Front->next = P->next;
                    Front->next = P;
                }
            }
             //Higher the number lower the priority
            else{
                Q  = Front;
                while(Q->next->priority<=P->priority && Q->next != NULL)
                {
                    Q = Q->next;
                }
                P->next = Q->next;
                Q->next  = P;
            }
        break;
        case 2:
              if(Front == NULL)
              {
                printf("\nUNDERFLOW");
              }
              else{
                Q = Front;
                Front = Q->next;
                printf("%d is dequeued",Q->data);
                free(Q);
                Q = NULL;
              }
        break;

        case 3:

              if(Front  == NULL ){
                printf("\nUNDERFLOW");
              } 
             else{ Q = Front;
              while(Q!=NULL){
                printf("%d ",Q->data);
                Q=Q->next;
              }
              Q = NULL;
             }
        break;

        default:printf("\nEnter the wrong Choice ");
        break;
    }
     printf("\n Do you want to continue: ");
        scanf("%d",&choice);  
        }while(choice == 1);

}