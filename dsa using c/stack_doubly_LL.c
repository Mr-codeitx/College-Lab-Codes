#include <stdio.h>
#include <stdlib.h>

typedef struct dnode {
  struct dnode *prev;
  int data;
  struct dnode *next;
} dnode;

int main() {
  dnode *Top = NULL, *P, *Q;
  int ch;
  do {
    printf("enter your choice\n 1.PUSH\n 2.POP\n 3.DISPLAY :");
    scanf("%d", &ch);

    switch (ch) {
    case 1:
      if (Top == NULL) {
        Top = (dnode *)malloc(sizeof(dnode));
        Top->next = NULL;
        Top->prev = NULL;
        printf("enter the data of first element:");
        scanf("%d", Top->data);
        P = Top;
      } else {
        Q = (dnode *)malloc(sizeof(dnode));
        Q->next = NULL;
        Q->prev = P;
        P->next = Q;
        printf("enter the data");
        scanf("%d", &Q->data);
        P = P->next;
      }
      break;
    case 2:
      if (Top == NULL) {
        printf("UNDERFLOW");

      } else {
        Q = Top;
        int x = Top->data;
        printf("%d POPPED Successfully", x);
        Top = Top->next;
        free(Q);
        Top->prev = NULL;
      }
      break;
    case 3:
      if (Top == NULL) {
        printf("UNDERFLOW");
      } else {
        P = Top;
        while (P != NULL) {
          printf("%d", &P->data);
          P = P->next;
        }
      }
      break;
    dfault:
      printf("wrong CHOICE");
    }
    printf("do you want to continue?");
    scanf("%d", &ch);
  } while (ch == 1);
}