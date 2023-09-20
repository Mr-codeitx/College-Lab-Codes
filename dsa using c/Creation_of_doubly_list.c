#include <stdio.h>
#include <stdlib.h>
typedef struct dnode {
  struct dnode *prev;
  int data;
  struct dnode *next;
} dnode;
int main() {
  dnode *Head = NULL, *P, *Q;
  int n;
  printf("enter the number of nodes:");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    if (Head == NULL) {
      Head = (dnode *)malloc(sizeof(dnode));
      Head->prev = NULL;
      Head->next = NULL;
      printf("enter the data of first node:");
      scanf("%d", &Head->data);
      P = Head;
    } else {
      Q = (dnode *)malloc(sizeof(dnode));
      printf("enter the data: ");
      scanf("%d", &Q->data);
      Q->next = NULL;
      Q->prev = P;
      P->next = Q;
      P = P->next;
    }
  }
  P=Head;
  while (P != NULL) {
    printf("%d \t", P->data);
    P = P->next;
  }
  P = Head;
  Q = Head->next;
  
  while(Q!=NULL) {
    dnode* r = P;
    free(r);
    free(P);
    free(r);
     P = Q;
     Q = Q->next;
     free(P);
     
  }
  free(P);
  free(Q);

  return 0;
}
