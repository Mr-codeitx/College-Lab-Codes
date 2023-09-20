


#include <stdio.h>
#include <stdlib.h>

typedef struct queue
{
    int data;
    struct queue *next;
}queue;

int main()
{
    int choice,ch;
    queue* Front = NULL;
    queue* Rear = NULL;
    queue* P;
    
do{
    
    printf("1. ENQUEUE \n 2. DEQUEUE \n 3. DISPLAY ");
    printf("\nEnter the choice : \n" );
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        if(Front == NULL && Rear == NULL)
        {
           Front = (queue*)malloc(sizeof(queue));
           Rear = Front;
           printf("enter the data: \n");
           scanf("%d",&Front->data);
           Front->next = NULL;
        }
        else{
             
            P = (queue*)malloc(sizeof(queue));
            printf("enter the data : \n");
            scanf("%d",&P->data);
            P->next = NULL;
            Rear->next = P;
            Rear = P;
            P = NULL;
        }
        break;

    case 2:
          if(Front == NULL && Rear == NULL)
          {
            printf("UNDERFLOW\n");
          }
          else{
             
             if(Front == Rear)
             {
                P = Rear;
                printf("%d is dequeued \n",P->data);
               
                free(P);
                 Front = NULL;
                Rear = NULL;
                P = NULL;
             }
             else{
                 P = Front;
                 printf("%d is dequeued \n",P->data);
                 Front = Front->next;
                 free(P);
                 P = NULL;
             }

          }
          break;
        case 3:
              if(Front == NULL && Rear == NULL)
              {
                printf("UNDERFLOW\n");
              }
              else{
                P = Front;
                while(P!=NULL)
                {
                    printf("%d ",P->data);
                    P = P->next;
                }
              }
        break;
    
    default: printf("WRONG INPUT \n");
        break;
    }
 printf("\nDo you want to continue: (Press 1) \n");
 scanf("%d",&ch);
}while(ch == 1);

}
