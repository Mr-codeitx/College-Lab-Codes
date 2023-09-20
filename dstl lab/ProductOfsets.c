#include <stdio.h>

int main()
{
    int n,m;
    printf("Enter the number of elements in set A\n");
    scanf("%d",&n);
    

    int A[n];
    printf("enter the elements of set A");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }

    printf("Enter the number of elements in set B\n");
    scanf("%d",&m);
    int B[m];
     printf("enter the elements of set B");
    for(int i=0;i<m;i++)
    {
        scanf("%d",&B[i]);
    }

    printf("the multiplication of 2 sets A*B ");
    printf("{");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("(%d,%d),",A[i],B[j]);
        }
    }
    printf("}");
    return 0;

}
