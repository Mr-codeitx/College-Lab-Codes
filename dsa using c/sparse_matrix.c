#include <stdio.h>

int main()
{
    int n,m;
    printf("enter the number of columns and rows");
    scanf("%d %d",&n,&m);
    int A[n][m];
    printf("enter the elements of the matrix");
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <m; j++)
        {
            scanf("%d",&A[i][j]);
        }
        
    }
    int S[m+n][3];
    S[0][0]=n;
    S[0][1]=m;    
    int c=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
              if(A[i][j]!=0){
                c++;
              }
        }
    }
    S[0][2]=c;
    int K=1;
for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
              if(A[i][j]!=0){
                S[K][0]=i;
                S[K][1]=j;
                S[K][2]=A[i][j];
                K++;
              }
        }
    }
    for(int i=0;i<K;i++){
        for(int j=0;j<3;j++){
              printf("%d ",S[i][j]);
              }
        printf("%d \n");
        }
return 0;
    }
