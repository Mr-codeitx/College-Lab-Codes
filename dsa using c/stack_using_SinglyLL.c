#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

int main()
{
    int choice, size, pos;
    node *Top=NULL, *P;
    do
    {
        printf("enter the choice\n 1.PUSH\n2.POP\n3.DISPAY\n4.SIZE\n5.PEEK ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
                if (Top == NULL)
                {
                    Top = (node *)malloc(sizeof(node));
                    Top->next = NULL;
                    printf("enter the data of first Position ");
                    scanf("%d", &Top->data);
                }
                else
                {
                    P = (node *)malloc(sizeof(node));
                    printf("enter the data: ");
                    scanf("%d", &P->data);
                    P->next = Top;
                    Top = P;
                }
            
            break;

        case 2:
            if (Top==NULL)
            {
                printf("UNDERFLOW");
            }
            else
            {
                node *Q;
                Q=Top;
                int x = Q->data;
                printf("%d popped successfully",x);
                Top=Top->next;
                free(Q);
            }
            break;

        case 3:
            P = Top;
           if(Top==NULL)
                {
                    printf("Stack is empty");
                }
            else{
                while(P!=NULL)
                {
                
               
                    printf("%d \t", P->data);
                    P = P->next;
                }
            }
            break;

        case 4: 
              if(Top == NULL)
              {
                printf("\nUNDERFLOW(No element)");
              }
              else
              {
                P = Top;
              int count = 0;
              while(P!=NULL)
              { count++;
                P = P->next;
              }
              printf("%d is the size of stack",count);
              }
            break;
        case 5:
        if(Top == NULL)
        {
            printf("\nUnderflow");
        }
        else{
            printf("\nThe Top element is %d",Top->data);
        }
        break;
        default:
            printf("wrong choice:");
        }
        printf("\nDo you want to continue?(Press 1)");
        scanf("%d", &choice);
    } while (choice == 1);
}
