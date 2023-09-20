#include <stdio.h>

int main()
{
    int n,m;
    printf("Enter the rows and columns of the matrix");
    scanf("%d %d",&n,&m);
    int A[n][m];
    printf("enter the elements");
    for(int i = 0; i<=n-1; i++)
    {
        for(int j = 0; j<=m-1; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }

    int SP[100][3];
    
    SP[0][0]=n;
    SP[0][1]=m;
    int count = 0;
    int K = 1;
    for(int i = 0; i<=n-1; i++)
    {
        for(int j = 0; j<=m-1; j++)
        {
            if(A[i][j]!=0)
            {
              SP[K][0] = i;
              SP[K][1] = j;
              SP[K][2] = A[i][j];
              K++;
              count++;
            }
        }
    }
    SP[0][2] = count;

    for( int i = 0; i<=count; i++)
    {
        for(int j = 0; j<=3-1; j++)
        {
            printf("%d ",SP[i][j]);
        }
        printf("\n");
    }

return 0;

}