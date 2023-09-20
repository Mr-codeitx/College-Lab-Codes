#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

int main()
{
    int choice;
    node *Top = NULL;
  do
  {
    printf("\nEnter the choice:");
    printf("\n1.PUSH\n2.POP\n3.DISPAY\n4.SIZE\n5.PEEK");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
             if(Top == NULL)
             {
                 printf("\nEnter the value of the first element");
                 scanf("%d",&Top->data);
                 Top->next == NULL;
             }
             else
             {  node *P = NULL;
                printf("\nEnter the value of the new node");
                scanf("%d",&P->data);
                P->next = Top;
                Top = P;
                P = NULL;
             }
    }
  }while(choice == 1);
}