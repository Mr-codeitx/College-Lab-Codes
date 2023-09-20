#include <stdio.h>
#include<stdlib.h>

typedef struct dnode{
    int data;
    struct dnode *prev;
    struct dnode *next;
}dnode;

int main() {
    int n;
    dnode *P,*Head = NULL;
    printf("\nEnter the number of nodes: ");
    scanf("%d",&n);
}