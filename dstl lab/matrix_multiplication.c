#include<stdio.h>

int main()
{
    int a[10][10],b[10][10],r,c,i,j,k,mul[10][10];
    printf("\nEnter the number of rows ");
    scanf("%d",&r);

    printf("\nEnter the number of column: ");
    scanf("%d",&c);

    printf("\nEnter the first matrix elements = ");
    for(i = 0;i<r;i++)
    {
       for(j = 0;j<c;j++)
       {
        scanf("%d",&a[i][j]);
       }
    }
    printf("\nEnter the second matrix :");
    for(i=0;i<r;i++)
    {
        for(j = 0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nmultiply of the matrix:");
    for(int i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            mul[i][j] = 0;
            for(k=0;k<c;k++)
            {
               mul[i][j] +=a[i][j]*b[k][j];
            }

        }
    }
    printf("\n");
    for(i = 0;i<r;i++)
    {   
        for(j=0;j<c;j++)
        {
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
        
    }
    return 0;
    
    

}