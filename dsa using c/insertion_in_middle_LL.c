#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int data;
  struct node *next;
} node;
int main()
{
  node *head, *Q, *P;
  head = (node *)malloc(sizeof(node));
  P = head;
  P->next = NULL;
  printf("enter the data of first node");
  scanf("%d", &head->data);
  int n;
  printf("enter the number of nodes");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    P->next = (node *)malloc(sizeof(node));
    P = P->next;
    printf("enter data: ");
    scanf("%d", &P->data);
    P->next = NULL;
  }
  P = head;
  while (P != NULL)
  {
    printf("%d \t", P->data);
    P = P->next;
  }
  printf("\n");
  P = head;
  int Pos;
  printf("enter the position at which you want to insert the new node\n");
  scanf("%d", &Pos);
  for (int i = 1; i <= Pos - 2; Pos++)
  {
    P = P->next;
  }
  Q = (node *)malloc(sizeof(node));
  printf("enter the data of the newly inserted node \n");
  scanf("%d", &Q->data);
  Q->next = P->next;
  P->next = Q;
  P = head;
  printf("the newly Linked List is:");
  while (P != NULL)
  {
    printf("%d \t", P->data);
    P = P->next;
  }
  printf("\n thank you");

return 0;
}