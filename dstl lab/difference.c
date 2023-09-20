#include <stdio.h>

int main()
{
    int n;
    printf("enter the no. of elements of Set A \n");
    scanf("%d",&n);
    int A[n];
    printf("enter the elements of set A \n");
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }

    int m;
    printf("Enter the no. of elements of set B \n");
    scanf("%d",&m);
    int B[m];
    printf("enter the elements of set B \n");
        for(int k=0;k<m;k++){
            scanf("%d",&B[k]);
    }
    int k=0;
    int c[100];

    for(int i=0;i<n;i++){
        int condition = 1;
        for (int j=0;j<m;j++){
            if(A[i]==B[j]){
               condition = 0;
            }
            
        }
        if(condition)
        {
            c[k] = A[i];
            k++;
        }
      }
printf("the difference of A & B(A-B) \n");
for(int i=0;i<k;i++){
    printf("%d ",c[i]);
}
return 0;
    }
