#include <stdio.h>
#include <stdlib.h>

typedef struct deck{
    int data;
    struct deck* next;
}deck;

int main()
{
    int choice;
    deck *Front = NULL,*Rear = NULL,*P;

    

    do{ printf("\nenter the choice");
    printf("\n 1.ENQUEUE at front\n2.ENQUEUE at Rear\n3.Dequeue at front\n4.Dequeue at end\n5.Display \n");
    scanf("%d",&choice);
       switch (choice)
       {
       case 1:
             if(Front == NULL && Rear == NULL)
             {
                Front = (deck*)malloc(sizeof(deck));
                printf("\nEnter the data ");
                scanf("%d",&Front->data);
                Rear = Front;
                Front->next = NULL;
             }
             else{
                  
                P = (deck*)malloc(sizeof(deck));
                printf("\nEnter the data");
                scanf("%d",&P->data);
                P->next = Front;
                Front = P;
                P = NULL;
             }
        break;

        case 2:
              if(Front == NULL && Rear == NULL){
                Front = (deck*)malloc(sizeof(deck));
                printf("\nEnter the data ");
                scanf("%d",&Front->data);
                Front->next = NULL;
                Rear = Front;
              }
              else{
                P = (deck*)malloc(sizeof(deck));
                printf("\nEnter its data ");
                scanf("%d",&P->data);
                Rear->next = P;
                P->next = NULL;
                Rear = P;
                P = NULL;
              }
        break;

        case 3:
              if(Front == NULL && Rear == NULL)
              {
                printf("\nUNDERFLOW");
              }
              else if(Front == Rear)
              {
                P = Front;
                printf("\n%d is dequeued ",P->data);
                Front = NULL;
                Rear = NULL;
                free(P);
                P = NULL;
              }
              else{
                P = Front;
                printf("\n%d is dequeued ",P->data);
                Front = Front->next;
                free(P);
                P = NULL;
              }
        break;

        case 4:
              if(Front == NULL && Rear == NULL)
              {
                printf("\nUNDERFLOW");
              }
              else if(Front == Rear)
              {
                P = Front;
                Front = NULL;
                Rear = NULL;
                printf("\n%d is dequeued ",P->data);
                free(P);
                P = NULL;
              }
              else{
                P = Front;
                while(P->next = Rear){
                    P = P->next;
                }
                Rear = P;
                P = P->next;
                free(P);
                P=NULL;
                Rear->next = NULL;
              }
        break;

        case 5:
              P = Front;
              printf("\n");
              while(P!=NULL){
                printf("%d ",P->data);
                P = P->next;
              }
        break;
       default:
              printf("\nWrong CHOICE");
        break;
       }
    printf("Do you want to continue ");
    scanf("%d",&choice);
             
    }while(choice == 1);
return 0;
}