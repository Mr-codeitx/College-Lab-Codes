#include <stdio.h>


void TOH(int n, char P, char Q, char R)
{
    if(n>0)
    {
        TOH(n-1,P,R,Q);
        printf("\t\n\t%c to %c",P,R);
        TOH(n-1,Q,P,R);
    }
}
int main()
{
    int n;
    printf("enter the number of disks");
    scanf("%d",&n);
    TOH(n,'A','B','C');
}